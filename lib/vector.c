#include "vector.h"
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define BUF_RESIZE_SIZE 4

void vec_init(vec_t* vec, uint16_t size, uint16_t element_sizeof) {
    vec->size = size;
    vec->element_sizeof = element_sizeof;
    vec->buf_size = (size + BUF_RESIZE_SIZE) * element_sizeof;
    vec->index = 0;
    vec->buf = calloc(vec->buf_size, sizeof(void*));
}

void vec_resize(vec_t* vec, uint16_t size) {
    void** tmp = realloc(vec->buf, (vec->buf_size + size) * sizeof(void*));

    if (tmp != NULL) {
        vec->buf = tmp;
        vec->buf_size= vec->buf_size + size;
    }
}

void vec_push_element(vec_t* vec, void* new_data) {
    if (vec->index >= vec->size && vec->size > vec->buf_size) {
        vec_resize(vec, BUF_RESIZE_SIZE);
        vec->size++;
    } else if (vec->index >= vec->size && vec->size <= vec->buf_size) {
        vec->size++;
    }

    vec->buf[vec->index++] = new_data; 
}

void vec_pop_element(vec_t* vec) {
    vec->size--;
}

void vec_clear(vec_t* vec) {
    memset(vec->buf, 0, vec->buf_size); 
    vec->size = 0;
    vec->index = 0;
}

void* vec_get_element(vec_t* vec, uint16_t index) {
    assert(index < vec->size && "vector index is bigger than size");
    return vec->buf[index];
}

uint16_t vec_get_size(vec_t* vec) {
    return vec->size;
}