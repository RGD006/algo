#ifndef ALGO_H
#define ALGO_H

#include <stdint.h>
#include "mystring.h"

size_t binary_search_int32_t(const int32_t* arr, const size_t size, const int32_t find_element);
size_t binary_search_char(const char* arr, const size_t size, const char find_element);
size_t binary_search_my_string_t(my_string_t* arr, const size_t size, my_string_t* find_element);

#endif