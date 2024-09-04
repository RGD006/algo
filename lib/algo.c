#include "algo.h"

#include <string.h>

size_t binary_search_int32_t(const int32_t* arr, const size_t size, const int32_t find_element)
{
    int32_t mid, start = 0, end = size - 1;
    
    for ( ; start <= end; ) {
        mid = (start + end) / 2;
        if (arr[mid] == find_element) {
            return mid;
        } else if (arr[mid] < find_element) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    } 

    return size; 
}

size_t binary_search_char(const char* arr, const size_t size, const char find_element)
{
    int32_t mid, start = 0, end = size - 1;

    for ( ; start <= end; ) {
        mid = (start + end) / 2;
        if (arr[mid] == find_element) {
            return mid;
        } else if (arr[mid] < find_element) {
            start = mid + 1;
        } else {
            end = mid - 1; 
        }
    }

    return size;
}

size_t binary_search_my_string_t(my_string_t* arr, const size_t size, my_string_t* find_element)
{
    int32_t mid, start = 0, end = size - 1;
    
    for ( ; start <= end ; ) {
        if (get_size_my_string_t(&arr[mid]) == get_size_my_string_t(find_element)) {
            
        }   
    }
}
