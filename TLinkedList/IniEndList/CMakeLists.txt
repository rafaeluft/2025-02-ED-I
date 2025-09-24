cmake_minimum_required(VERSION 3.29)
project(IniEndList C)

set(CMAKE_C_STANDARD 11)

add_executable(IniEndList main.c
        TLinkedList.c)
