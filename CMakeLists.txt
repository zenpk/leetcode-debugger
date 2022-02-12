cmake_minimum_required(VERSION 3.21)
project(LeetCode-Debugger)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode main.cpp mystruct.h Input.cpp Input.h Solution.h Output.cpp Output.h)
