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

size_t binary_search_my_string_t(my_string_t* arr, const size_t size, my_string_t find_element)
{
    int32_t mid, target = size, start = 0, end = size - 1;
    
#define COMPARE_SIZE(SRC_1, SRC_2) get_size_my_string_t(&SRC_1) == get_size_my_string_t(&SRC_2)

    for ( ; start <= end ; ) {
        mid = start + end;
        if (COMPARE_SIZE(arr[mid], find_element)) {
            target = mid;
            end = mid - 1;
        } else if (compare_string(arr[mid], find_element) == SIZE_STRING_LOWER) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (target != size) {
        for ( ; COMPARE_SIZE(arr[target], find_element) ; target++) {
            if (compare_string(arr[target], find_element) == STRING_EQUAL) {
                return target;
            }
        }
    }

    return size;
}
