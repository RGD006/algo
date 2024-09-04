#include "algo.h"

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

    return INT32_MAX; 
}

size_t binary_search_string(const char** arr, const size_t size, const char* founded_name)
{
    int32_t mid, start_arr_string = 0, end_arr_string = size - 1;

}