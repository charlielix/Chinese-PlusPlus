cmake_minimum_required(VERSION 4.1)
project(Chinese_PlusPlus)

set(CMAKE_CXX_STANDARD 23)

add_executable(Chinese_PlusPlus main.cpp Chinese.hpp
        pinyin.h)

add_executable(Chinese_PlusPlus_Test test.cpp Chinese.hpp
        pinyin.h)
