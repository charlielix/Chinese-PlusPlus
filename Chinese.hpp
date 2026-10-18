#ifndef CHINESE_H
#define CHINESE_H

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <bitset>
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
#define 真 true
#define 假 false
#define 无穷大 0x3f3f3f3f
#define 长无穷大 0x3f3f3f3f3f3f3f3fLL

// ==========================================
// 2. 基本数据类型
// ==========================================
#define 整数 int
#define 长整数 long long
#define 无符号整数 unsigned int
#define 无符号长整数 unsigned long long
#define 小数 double
#define 浮点数 float
#define 字符 char
#define 布尔 bool
#define 空 void
#define 自动 auto
#define 字符串 std::string

// ==========================================
// 3. 控制流与基础关键字
// ==========================================
#define 主函数 main
#define 开辟命名空间 using namespace
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

// ==========================================
// 4. 输入输出与文件操作 (不含任何符号)
// ==========================================
#define 输入 std::cin
#define 输出 std::cout
#define 换行 std::endl
#define 格式化输入 std::scanf
#define 格式化输出 std::printf
#define 文件重定向 std::freopen

// ==========================================
// 5. 信竞常用高频 STL 容器与数据结构
// ==========================================
#define 动态数组 std::vector
#define 栈 std::stack
#define 队列 std::queue
#define 双端队列 std::deque
#define 优先队列 std::priority_queue
#define 集合 std::set
#define 多重集合 std::multiset
#define 映射 std::map
#define 二进制位集 std::bitset
#define 二元组 std::pair
#define 列表 std::initializer_list

// STL 常用成员函数映射
#define 推入 push
#define 尾部推入 push_back
#define 弹出 pop
#define 尾部弹出 pop_back
#define 顶部 top
#define 头部 front
#define 尾部 back
#define 大小 size
#define 是否为空 empty
#define 清空 clear
#define 插入 insert
#define 擦除 erase
#define 查找 find
#define 计数 count
#define 改变大小 resize
#define 预留空间 reserve
#define 第一元素 first
#define 第二元素 second

// 迭代器与范围
#define 起始迭代器 begin
#define 结束迭代器 end
#define 反向起始迭代器 rbegin
#define 反向结束迭代器 rend

// ==========================================
// 6. 常用算法与高频系统函数
// ==========================================
#define 排序 std::sort
#define 稳定排序 std::stable_sort
#define 逆转 std::reverse
#define 填充内存 std::memset
#define 复制内存 std::memcpy
#define 交换 std::swap
#define 最大值 std::max
#define 最小值 std::min
#define 绝对值 std::abs
#define 平方根 std::sqrt
#define 指数函数 std::pow
#define 下界查找 std::lower_bound
#define 上界查找 std::upper_bound
#define 下一个排列 std::next_permutation
#define 最大公约数 std::gcd
#define 最小公倍数 std::lcm

#endif // CHINESE_H