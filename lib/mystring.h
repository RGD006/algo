#ifndef MYSTRING_H
#define MYSTRING_H

#include <stdint.h>

typedef enum {
    SIZE_STRING_BIGGER,
    SIZE_STRING_LOWER,
    STRING_EQUAL,
    STRING_NOT_EQUAL
} STRING_STATE;

typedef struct my_string {
    char* str;
    size_t size;
} my_string_t;

int8_t compare_string(my_string_t src_1, my_string_t src_2); 
my_string_t init_string_t(char* str, const size_t size);
size_t get_size_my_string_t(my_string_t* src);
void redefine_string_t(my_string_t* src, char* new_str, const size_t new_size);
void free_memory_string_t(my_string_t* src);

#endif