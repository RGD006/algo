cmake_minimum_required(VERSION 3.21)
project(algo)

include_directories(lib)

add_executable(algo main.c lib/algo.c lib/mystring.c)