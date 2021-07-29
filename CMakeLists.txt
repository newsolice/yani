cmake_minimum_required(VERSION 3.16)
project(yani C)

set(CMAKE_C_STANDARD 99)

add_executable(yani main.c linearlist/sequence.h linearlist/sequence.c)
