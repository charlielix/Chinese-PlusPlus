cmake_minimum_required(VERSION 3.20)

project(Chinese_PlusPlus LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 头文件库：include/chinese.hpp
add_library(chinese INTERFACE)
target_include_directories(chinese INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# 中文示例 / 自测程序
add_executable(Chinese_PlusPlus_Test TESTING/main.cpp)
target_link_libraries(Chinese_PlusPlus_Test PRIVATE chinese)
