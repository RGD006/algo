#include "mystring.h"
#include <stdlib.h>
#include <string.h> 

// @brief
// Compares two string whather it equal 
// SIZE_STRING_BIGGER: when src_1 is bigger than src_2
// SIZE_STRING_LOWER: when src_1 is lower than src_1
//
int8_t compare_string(my_string_t src_1, my_string_t src_2)
{
    if (src_1.size > src_2.size) {
        return SIZE_STRING_BIGGER;
    } else if (src_1.size < src_2.size) {
        return SIZE_STRING_LOWER;
    } else {
        for (size_t i = 0; i < src_1.size; i++) {
            if (src_1.str[i] != src_2.str[i]) {
                return STRING_NOT_EQUAL; 
            }
        }

        return STRING_EQUAL;
    }
}

my_string_t init_string_t(char* str, const size_t size)
{
    my_string_t tmp;
    tmp.size = size;
    tmp.str = calloc(tmp.size, sizeof(char));
    for (size_t i = 0; i < tmp.size; i++) {
        tmp.str[i] = str[i];
    }

    return tmp;
}

void free_memory_string_t(my_string_t* src)
{
    free(src->str);
}

void redefine_string_t(my_string_t* src, char* new_str, const size_t new_size)
{
    free_memory_string_t(src);

    *src = init_string_t(new_str, new_size);
}

size_t get_size_my_string_t(my_string_t* src)
{
    return src->size;
}