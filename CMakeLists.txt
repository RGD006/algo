cmake_minimum_required(VERSION 3.21)
project(algo)

include_directories(lib)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0")

add_executable(algo main.c lib/linked_list.c lib/algo.c lib/hashset.c lib/mystring.c lib/vector.c)  