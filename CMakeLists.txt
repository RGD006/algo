cmake_minimum_required(VERSION 3.21)
project(algo)

include_directories(lib)

add_executable(algo main.c lib/linked_list.c lib/algo.c lib/hashset.c lib/mystring.c lib/vector.c)