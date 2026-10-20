#ifndef CHINESE_H
#define CHINESE_H

// ============================================================
// Chinese-Plus-Plus：用中文书写 C++ 的头文件库
//
// 用法：
//     #include "chinese.hpp"
//     开辟命名空间 std;
//     整数 主函数() {
//         输出 << "你好，中文 C++" << 换行;
//         返回 零;
//     }
// ============================================================

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include <cstring>
#include <climits>
#include <algorithm>
#include <numeric>
#include <functional>
#include <limits>
#include <string>
#include <string_view>
#include <vector>
#include <array>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <tuple>
#include <utility>
#include <initializer_list>

// ==========================================
// 1. 基础常数与逻辑值
// ==========================================
#define 零 0
#define 一 1
#define 二 2
#define 三 3
#define 四 4
#define 五 5
#define 六 6
#define 七 7
#define 八 8
#define 九 9
#define 十 10
#define 百 100
#define 千 1000
#define 万 10000
#define 亿 100000000
#define 负一 (-1)
#define 真 true
#define 假 false
#define 空字符 '\0'
#define 换行符 '\n'
#define 制表符 '\t'
#define 无穷大 0x3f3f3f3f
#define 长无穷大 0x3f3f3f3f3f3f3f3fLL
#define 最大整数 2147483647
#define 最小整数 (-2147483647 - 1)
#define 最大长整数 9223372036854775807LL
#define 圆周率 3.14159265358979323846
#define 自然常数 2.71828182845904523536

// ==========================================
// 2. 基本数据类型
// ==========================================
#define 整数 int
#define 长整数 long long
#define 短整数 short
#define 无符号整数 unsigned int
#define 无符号长整数 unsigned long long
#define 无符号短整数 unsigned short
#define 小数 double
#define 浮点数 float
#define 长双精度 long double
#define 字符 char
#define 无符号字符 unsigned char
#define 布尔 bool
#define 空 void
#define 自动 auto
#define 字符串 std::string
#define 字符串视图 std::string_view
#define 长度类型 std::size_t

// ==========================================
// 3. 指针、引用与类型操作
// ==========================================
#define 空指针 nullptr
#define 此 this
#define 长度 sizeof
#define 对齐 alignof
#define 类型转换 static_cast
#define 常量转换 const_cast
#define 重解释转换 reinterpret_cast
#define 动态转换 dynamic_cast
#define 类型标识 typeid
#define 类型别名 using

// ==========================================
// 4. 控制流与基础关键字
// ==========================================
#define 主函数 main
#define 开辟命名空间 using namespace
#define 命名空间 namespace
#define 如果 if
#define 否则 else
#define 计数循环 for
#define 当循环 while
#define 执行 do
#define 切换 switch
#define 分支 case
#define 默认 default
#define 跳出 break
#define 继续 continue
#define 返回 return
#define 结构体 struct
#define 常量 const
#define 静态 static
#define 外部 extern
#define 内联 inline
#define 可变 mutable
#define 常量表达式 constexpr
#define 显式 explicit
#define 无异常 noexcept
#define 静态断言 static_assert
#define 断言 assert
#define 新建 new
#define 删除 delete
#define 移动 std::move
#define 前向 std::forward

// ==========================================
// 5. 面向对象与泛型
// ==========================================
#define 类 class
#define 公有 public
#define 私有 private
#define 保护 protected
#define 继承 : public
#define 私有继承 : private
#define 保护继承 : protected
#define 虚 virtual
#define 纯虚 = 0
#define 覆盖 override
#define 最终 final
#define 友元 friend
#define 运算符 operator
#define 模板 template
#define 类型名 typename
#define 枚举 enum
#define 枚举类 enum class
#define 联合 union

// ==========================================
// 6. 中文运算符（中缀书写）
//     例：整数 和 = 甲 加 乙 乘 二;
// ==========================================
#define 加 +
#define 减 -
#define 乘 *
#define 除 /
#define 取余 %
#define 位与 &
#define 位或 |
#define 位异或 ^
#define 按位取反 ~
#define 按位非 ~
#define 左移 <<
#define 右移 >>
#define 逻辑与 &&
#define 逻辑或 ||
#define 逻辑非 !
#define 赋值 =
#define 相等 ==
#define 不等 !=
#define 小于 <
#define 大于 >
#define 小于等于 <=
#define 大于等于 >=
#define 自增 ++
#define 自减 --
#define 取地址 &
#define 解引用 *
#define 成员 .
#define 指针成员 ->
#define 作用域 ::

// ==========================================
// 7. 输入输出与文件操作
// ==========================================
#define 输入 std::cin
#define 输出 std::cout
#define 错误输出 std::cerr
#define 换行 std::endl
#define 获取行 std::getline
#define 格式化输入 std::scanf
#define 格式化输出 std::printf
#define 文件重定向 std::freopen
#define 设置精度 std::setprecision
#define 固定小数 std::fixed

// ==========================================
// 8. 信竞常用高频 STL 容器与数据结构
// ==========================================
#define 动态数组 std::vector
#define 静态数组 std::array
#define 链表 std::list
#define 栈 std::stack
#define 队列 std::queue
#define 双端队列 std::deque
#define 优先队列 std::priority_queue
#define 集合 std::set
#define 多重集合 std::multiset
#define 无序集合 std::unordered_set
#define 映射 std::map
#define 多重映射 std::multimap
#define 无序映射 std::unordered_map
#define 二进制位集 std::bitset
#define 二元组 std::pair
#define 元组 std::tuple
#define 列表 std::initializer_list
#define 函数对象 std::function
#define 造对 std::make_pair
#define 造元组 std::make_tuple
#define 取元素 std::get

// ==========================================
// 9. STL 常用成员函数映射
// ==========================================
#define 推入 push
#define 尾部推入 push_back
#define 头部推入 push_front
#define 尾部构造 emplace_back
#define 头部构造 emplace_front
#define 弹出 pop
#define 尾部弹出 pop_back
#define 头部弹出 pop_front
#define 顶部 top
#define 头部 front
#define 尾部 back
#define 大小 size
#define 容量 capacity
#define 最大容量 max_size
#define 是否为空 empty
#define 清空 clear
#define 插入 insert
#define 擦除 erase
#define 查找 find
#define 计数 count
#define 改变大小 resize
#define 预留空间 reserve
#define 指派 assign
#define 第一元素 first
#define 第二元素 second
#define 追加 append
#define 子串 substr
#define 替换 replace
#define 比较 compare
#define 数据 data
#define 置位 set
#define 复位 reset
#define 翻转 flip
#define 测试位 test

// ==========================================
// 10. 迭代器与范围
// ==========================================
#define 起始迭代器 begin
#define 结束迭代器 end
#define 反向起始迭代器 rbegin
#define 反向结束迭代器 rend
#define 常量起始迭代器 cbegin
#define 常量结束迭代器 cend

// ==========================================
// 11. 常用算法与高频系统函数
// ==========================================
#define 排序 std::sort
#define 稳定排序 std::stable_sort
#define 部分排序 std::partial_sort
#define 逆转 std::reverse
#define 填充内存 std::memset
#define 复制内存 std::memcpy
#define 填充 std::fill
#define 累加和 std::accumulate
#define 递增填充 std::iota
#define 去重 std::unique
#define 最小元素 std::min_element
#define 最大元素 std::max_element
#define 计数满足 std::count_if
#define 二分查找 std::binary_search
#define 交换 std::swap
#define 最大值 std::max
#define 最小值 std::min
#define 较大值 std::max
#define 较小值 std::min
#define 绝对值 std::abs
#define 平方根 std::sqrt
#define 立方根 std::cbrt
#define 指数函数 std::pow
#define 下界查找 std::lower_bound
#define 上界查找 std::upper_bound
#define 下一个排列 std::next_permutation
#define 上一个排列 std::prev_permutation
#define 最大公约数 std::gcd
#define 最小公倍数 std::lcm

// ==========================================
// 12. 数学函数
// ==========================================
#define 向上取整 std::ceil
#define 向下取整 std::floor
#define 四舍五入 std::round
#define 自然对数 std::log
#define 常用对数 std::log10
#define 正弦 std::sin
#define 余弦 std::cos
#define 正切 std::tan
#define 反正弦 std::asin
#define 反余弦 std::acos
#define 反正切 std::atan
#define 双曲正弦 std::sinh
#define 双曲余弦 std::cosh
#define 双曲正切 std::tanh

// ==========================================
// 13. 数值与字符串转换
// ==========================================
#define 转字符串 std::to_string
#define 转整数 std::stoi
#define 转长整数 std::stoll
#define 转小数 std::stod
#define 转浮点数 std::stof
#define 数值上限 std::numeric_limits

// ==========================================
// 14. 整数转中文数字（编译期可求值）
//
//   运行期：
//       输出 << 转中文数字(2026);              // 二千零二十六
//   编译期（C++17 起）：
//       constexpr 中文数字文本 名 = 转中文数字常量(2026);
//       static_assert(名.视图() == "二千零二十六");
//       static_assert(转中文数字常量(105) == "一百零五");
//
//   * 转中文数字常量：constexpr、零堆分配，可作 static_assert / 模板参数；
//   * 转中文数字  ：返回 std::string，供普通运行期使用。
// ==========================================
struct 中文数字文本 {
    static constexpr int 缓冲字节数 = 256;

    char 内容[缓冲字节数] = {};
    int 字节数 = 0;

    constexpr void 写入(const char* 词) {
        for (int i = 0; 词[i] != '\0'; ++i) {
            内容[字节数] = 词[i];
            ++字节数;
        }
        内容[字节数] = '\0';
    }

    constexpr const char* 数据指针() const { return 内容; }

    // 视图指向本对象内部缓冲：仅在对象存活期内有效；
    // 需要长期保存请用 取字符串() 或转成 std::string。
    constexpr std::string_view 视图() const {
        return std::string_view(内容, static_cast<std::size_t>(字节数));
    }

    constexpr bool operator==(std::string_view 其他) const { return 视图() == 其他; }
    constexpr bool operator!=(std::string_view 其他) const { return 视图() != 其他; }

    // 支持的实现上（C++20 起，libstdc++/libc++ 均已实现）亦可用于常量求值
#if defined(__cpp_lib_constexpr_string) && __cpp_lib_constexpr_string >= 201907L
    constexpr
#endif
    std::string 取字符串() const { return std::string(内容, 内容 + 字节数); }
};

inline constexpr const char* 中文数码[10] = {"零", "一", "二", "三", "四",
                                             "五", "六", "七", "八", "九"};
inline constexpr const char* 中文小权[4] = {"千", "百", "十", ""};
inline constexpr const char* 中文大权[5] = {"", "万", "亿", "万亿", "亿亿"};

constexpr 中文数字文本 转中文数字常量(long long 数) {
    中文数字文本 文本;

    if (数 == 0) {
        文本.写入("零");
        return 文本;
    }

    unsigned long long 量值 = 0;
    if (数 < 0) {
        文本.写入("负");
        量值 = static_cast<unsigned long long>(-(数 + 1)) + 1ULL;
    } else {
        量值 = static_cast<unsigned long long>(数);
    }

    // 按 4 位一组拆分：个、万、亿、万亿、亿亿
    unsigned 组[5] = {0, 0, 0, 0, 0};
    int 组数 = 0;
    while (量值 > 0 && 组数 < 5) {
        组[组数] = static_cast<unsigned>(量值 % 10000);
        ++组数;
        量值 /= 10000;
    }

    for (int i = 组数 - 1; i >= 0; --i) {
        unsigned 当前 = 组[i];
        if (当前 == 0) continue;

        bool 是最高组 = (i == 组数 - 1);
        if (!是最高组 && 当前 < 1000) 文本.写入("零");

        bool 已输出 = false;
        bool 待补零 = false;
        for (int k = 0; k < 4; ++k) {
            unsigned 权 = (k == 0 ? 1000u : k == 1 ? 100u : k == 2 ? 10u : 1u);
            unsigned 位 = (当前 / 权) % 10;
            if (位 == 0) {
                if (已输出) 待补零 = true;
                continue;
            }
            if (待补零) {
                文本.写入("零");
                待补零 = false;
            }
            if (k == 2 && 位 == 1 && 是最高组 && 当前 < 20) {
                // 十位特例：10 → 十，15 → 十五
                文本.写入("十");
            } else {
                文本.写入(中文数码[位]);
                文本.写入(中文小权[k]);
            }
            已输出 = true;
        }

        if (i > 0) 文本.写入(中文大权[i]);
    }

    return 文本;
}

#if defined(__cpp_lib_constexpr_string) && __cpp_lib_constexpr_string >= 201907L
constexpr auto 转中文数字(long long 数) -> std::string {
#else
inline std::string 转中文数字(long long 数) {
#endif
    return 转中文数字常量(数).取字符串();
}

// ==========================================
// 15. 中文数字转整数（强制编译期求值）
//
//     整数 甲 = 中文数("一百二十三");    // 123
//     整数 乙 = 中文数("一万零五");      // 10005
//     整数 丙 = 中文数("负三");          // -3
//     整数 丁 = 中文数("一二三");        // 123（逐位连写）
//     静态断言(中文数("两百零五") 相等 205);
//
//   consteval：只能编译期求值；传运行期变量会直接编译失败，
//   所以中文数字永远以常量形式出现在产物里，运行期零开销。
//   （C++17 下自动退化为 constexpr，仍可用于常量表达式，但不强制）
// ==========================================
#if defined(__cpp_consteval)
#  define 中文常量求值 consteval
#else
#  define 中文常量求值 constexpr
#endif

中文常量求值 long long 中文整数(std::string_view 文本) {
    if (文本.empty()) throw "中文数字：内容为空";

    long long 总 = 0;
    long long 段 = 0;
    long long 当前 = 0;
    bool 有数码 = false;
    bool 负数 = false;
    bool 有内容 = false;

    for (std::size_t i = 0; i < 文本.size();) {
        const unsigned char 首字节 = static_cast<unsigned char>(文本[i]);

        std::size_t 字节数 = 0;
        if (首字节 < 0x80) 字节数 = 1;
        else if ((首字节 & 0xF0) == 0xE0) 字节数 = 3;
        else throw "中文数字：只支持 UTF-8 中文与 ASCII 字符";

        if (i + 字节数 > 文本.size()) throw "中文数字：UTF-8 字节不完整";

        const std::string_view 字 = 文本.substr(i, 字节数);
        i += 字节数;

        if (字 == " " || 字 == "\t" || 字 == "，" || 字 == ",") continue;

        if (字 == "负" || 字 == "-") {
            负数 = true;
            continue;
        }

        int 数码 = -1;
        if (字 == "零" || 字 == "〇") 数码 = 0;
        else if (字 == "一" || 字 == "壹") 数码 = 1;
        else if (字 == "二" || 字 == "两" || 字 == "贰") 数码 = 2;
        else if (字 == "三" || 字 == "叁") 数码 = 3;
        else if (字 == "四" || 字 == "肆") 数码 = 4;
        else if (字 == "五" || 字 == "伍") 数码 = 5;
        else if (字 == "六" || 字 == "陆") 数码 = 6;
        else if (字 == "七" || 字 == "柒") 数码 = 7;
        else if (字 == "八" || 字 == "捌") 数码 = 8;
        else if (字 == "九" || 字 == "玖") 数码 = 9;

        if (数码 >= 0) {
            // 连写按十进制拼接： "一二三" → 123
            当前 = 有数码 ? 当前 * 10 + 数码 : 数码;
            有数码 = true;
            有内容 = true;
            continue;
        }

        long long 权 = 0;
        if (字 == "十" || 字 == "拾") 权 = 10;
        else if (字 == "百" || 字 == "佰") 权 = 100;
        else if (字 == "千" || 字 == "仟") 权 = 1000;

        if (权 > 0) {
            // 单写 "十" 时按 1 倍权计，例如 "十二" → 12
            段 += (有数码 ? 当前 : 1) * 权;
            当前 = 0;
            有数码 = false;
            有内容 = true;
            continue;
        }

        if (字 == "万" || 字 == "萬" || 字 == "亿" || 字 == "億") {
            long long 单位 = (字 == "亿" || 字 == "億") ? 100000000LL : 10000LL;

            // 复合单位：连续的单位字相乘（一万亿 = 10^12，一亿亿 = 10^16）
            while (i < 文本.size()) {
                const unsigned char 下首字节 = static_cast<unsigned char>(文本[i]);
                if ((下首字节 & 0xF0) != 0xE0 || i + 3 > 文本.size()) break;

                const std::string_view 下字 = 文本.substr(i, 3);
                long long 下单位 = 0;
                if (下字 == "万" || 下字 == "萬") 下单位 = 10000LL;
                else if (下字 == "亿" || 下字 == "億") 下单位 = 100000000LL;
                else break;

                if (单位 > 最大长整数 / 下单位)
                    throw "中文数字：超出 long long 表示范围";
                单位 *= 下单位;
                i += 3;
            }

            const long long 段值 = 段 + 当前;
            if (段值 > (最大长整数 - 总) / 单位)
                throw "中文数字：超出 long long 表示范围";

            总 += 段值 * 单位;
            段 = 0;
            当前 = 0;
            有数码 = false;
            有内容 = true;
            continue;
        }

        throw "中文数字：存在无法识别的字";
    }

    if (!有内容) throw "中文数字：未读到任何数字";

    const long long 值 = 总 + 段 + 当前;
    return 负数 ? -值 : 值;
}

// 便利封装：默认返回 整数，可显式指定类型
//   整数 甲 = 中文数("一百二十三");
//   长整数 乙 = 中文数<长整数>("九百二十二亿亿...");
模板 <类型名 类型 = 整数>
中文常量求值 类型 中文数(std::string_view 文本) {
    const long long 值 = 中文整数(文本);
    if (值 > static_cast<long long>(数值上限<类型>::max()) ||
        值 < static_cast<long long>(数值上限<类型>::min()))
        throw "中文数：超出目标类型表示范围，可改用 中文数<长整数>";
    return static_cast<类型>(值);
}

#endif // CHINESE_H
