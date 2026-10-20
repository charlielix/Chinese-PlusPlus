// makenum_fast.cpp
// 编译: g++ -O3 -std=c++17 makenum_fast.cpp -o makenum
// 运行: ./makenum

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

static const char* DIGITS[] = {
    "零","一","二","三","四","五","六","七","八","九"
};

// 优化：直接修改传入的 string，避免多次拼接产生临时对象
static void fourDigitsToChinese(int num, bool isLeading, std::string& out) {
    const char* units[] = {"", "十", "百", "千"};
    size_t startPos = out.size();
    bool zeroFlag = false;

    for (int i = 0; i < 4; ++i) {
        int d = num % 10;
        num /= 10;
        if (d == 0) {
            if (out.size() > startPos && !zeroFlag) zeroFlag = true;
        } else {
            if (zeroFlag) {
                out.insert(startPos, "零");
                zeroFlag = false;
            }
            if (isLeading && d == 1 && i == 1 && num == 0 && out.size() == startPos) {
                out.insert(startPos, units[i]);
            } else {
                std::string temp = DIGITS[d];
                temp += units[i];
                out.insert(startPos, temp);
            }
        }
    }
}

static void intToChinese(long long n, std::string& out) {
    out.clear();
    if (n == 0) { out = "零"; return; }
    const char* bigUnits[] = {"", "万", "亿"};

    int groups[3] = {0, 0, 0};
    int groupCount = 0;
    long long temp = n;
    while (temp > 0) {
        groups[groupCount++] = static_cast<int>(temp % 10000);
        temp /= 10000;
    }

    for (int idx = groupCount - 1; idx >= 0; --idx) {
        int g = groups[idx];
        if (g == 0) {
            if (!out.empty() && idx > 0) {
                bool hasNonZeroAfter = false;
                for (int j = 0; j < idx; ++j) {
                    if (groups[j] != 0) { hasNonZeroAfter = true; break; }
                }
                if (hasNonZeroAfter && out.back() != '零') out += "零";
            }
            continue;
        }
        bool isLeading = (idx == groupCount - 1);
        size_t prevSize = out.size();
        fourDigitsToChinese(g, isLeading, out);

        if (prevSize > 0 && g < 1000 && out[prevSize - 1] != '零' && out[prevSize - 1] != '\0') {
            out.insert(prevSize, "零");
        }
        if (idx < 3) out += bigUnits[idx];
    }
}

int main() {
    const long long MAX_VALUE = 100000000LL;
    const std::string filename = "chinese_numbers.h";

    std::ofstream out(filename, std::ios::binary);
    if (!out) {
        std::cerr << "无法创建文件: " << filename << "\n";
        return 1;
    }

    // 1MB 的缓冲区
    std::vector<char> buffer(1024 * 1024);
    out.rdbuf()->pubsetbuf(buffer.data(), buffer.size());

    out << "#ifndef CHINESE_NUMBERS_H\n";
    out << "#define CHINESE_NUMBERS_H\n\n";

    std::string chineseStr;
    chineseStr.reserve(32); // 预分配字符串空间，避免反复 malloc

    // 开启编译器 O3 优化后，这一段会跑得飞快
    for (long long i = 0; i <= MAX_VALUE; ++i) {
        intToChinese(i, chineseStr);
        out << "#define " << chineseStr << " " << i << "\n";
    }

    out << "\n#endif // CHINESE_NUMBERS_H\n";
    out.close();

    std::cout << "已生成文件: " << filename << "\n";
    std::cout << "共 " << (MAX_VALUE + 1) << " 个宏定义\n";
    return 0;
}