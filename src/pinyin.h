#ifndef PINYIN_H
#define PINYIN_H

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
// 1. 常数与逻辑值 (Changshu & Luoji)
// ==========================================
#define ling 0
#define yi 1
#define er 2
#define san 3
#define si 4
#define wu 5
#define liu 6
#define qi 7
#define ba 8
#define jiu 9
#define shi 10
#define zhen true
#define jia false
#define wuqunda 0x3f3f3f3f
#define changwuqunda 0x3f3f3f3f3f3f3f3fLL

// ==========================================
// 2. 数据类型 (Shuju Leixing)
// ==========================================
#define zhengshu int
#define changzhengshu long long
#define wufuhaozhengshu unsigned int
#define wufuhaochangzhengshu unsigned long long
#define xiaoshu double
#define fadianshu float
#define zifu char
#define buer bool
#define kong void
#define zidong auto
#define zifuchuan std::string
#define kongzhizhen nullptr

// ==========================================
// 3. 控制流与基础关键字 (Kongzhi Liu)
// ==========================================
#define zhuhanshu main
#define kaipimingmingkongjian using namespace
#define ruguo if
#define fouze else
#define jishuxunhuan for
#define dangxunhuan while
#define zhixing do
#define qiehuan switch
#define fenzhi case
#define moren default
#define tiaochu break
#define jixu continue
#define fanhui return
#define jiegouti struct
#define changliang const
#define jingtai static

// ==========================================
// 4. 输入输出 (Shuru Shuchu)
// ==========================================
#define shuru std::cin
#define shuchu std::cout
#define huanhang std::endl
#define geshihuashuru std::scanf
#define geshihuashuchu std::printf
#define wenjianchongdingxiang std::freopen

// ==========================================
// 5. 常用 STL 容器与数据结构 (STL Rongqi)
// ==========================================
#define dongtaishuzu std::vector
#define zhan std::stack
#define duilie std::queue
#define shuangduanduilie std::deque
#define youxianduilie std::priority_queue
#define jihe std::set
#define duochongjihe std::multiset
#define yingshe std::map
#define erjinzhiweiji std::bitset
#define eryuanzu std::pair
#define liebiao std::initializer_list

// STL 成员函数与迭代器
#define tuiru push
#define weibutuiru push_back
#define tanchu pop
#define weibutanchu pop_back
#define dingbu top
#define toubu front
#define weibu back
#define daxiao size
#define shifouweikong empty
#define qingkong clear
#define charu insert
#define cachu erase
#define chazhao find
#define jishu count
#define diyiyuansu first
#define dieryuansu second
#define qishidiedaiqi begin
#define jieshudiedaiqi end

// ==========================================
// 6. 常用系统函数 (Xitong Hanshu)
// ==========================================
#define paixu std::sort
#define wendingpaixu std::stable_sort
#define nizhuan std::reverse
#define tianchongneicun std::memset
#define jiaohuan std::swap
#define zuidawei std::max
#define zuixiaowei std::min
#define jueduizhi std::abs
#define pingfanggen std::sqrt
#define zhishuhanshu std::pow
#define xiajiechazhao std::lower_bound
#define shangjiechazhao std::upper_bound

#endif // PINYIN_H
