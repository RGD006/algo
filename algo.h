#ifndef ALGO_H
#define ALGO_H

#include <stdint.h>

#define binary_search(type_array) _Generic((type_array), \
 const int32_t*: binary_search_int32_t, \
 const char**  : binary_search_string,  \
 const char*   : binary_search_char,    \
) (type_array) 

size_t binary_search_int32_t(const int32_t* arr, const size_t size, const int32_t find_element);
size_t binary_search_string(const char** arr, const size_t size, const char* find_element); 
size_t binary_search_char(const char* arr, const size_t size, const char find_element);

#endif