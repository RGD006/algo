#ifndef _vec_H
#define _vec_H

#include <stdint.h>

typedef struct _vec { 
    void** buf;
    uint16_t index;
    uint16_t size;
    uint16_t buf_size;
    uint16_t element_sizeof;
} vec_t; 

void vec_init(vec_t* vec, uint16_t size, uint16_t element_sizeof);
void vec_push_element(vec_t* vec, void* new_data);
void vec_pop_element(vec_t* vec);
void vec_resize(vec_t* vec, uint16_t size);
void vec_clear(vec_t* vec);
void* vec_get_element(vec_t* vec, uint16_t index);
uint16_t vec_get_size(vec_t* vec);

#endif