cmake_minimum_required(VERSION 3.26)
project(coding C)

set(CMAKE_C_STANDARD 17)

add_executable(6.18 6.18.c)
add_executable(6.19 6.19.c)
add_executable(6.20 6.20.c)
add_executable(test "\$test(gets&fgets)\$.c")