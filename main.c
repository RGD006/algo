#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algo.h"
#include "vector.h"

#define ARRAY_SIZE_INT32 100
#define ARRAY_SIZE_STRING 10

typedef struct {
    uint8_t a;
    uint8_t b;
} a_t;

int main()
{
    vec_t vec;

    vec_init(&vec, 4, sizeof(a_t));

    a_t c = { .a=20, .b=30 };

    vec_push_element(&vec, (a_t*)&c);

    for (uint8_t i = 0; i < vec_get_size(&vec); i++) {
        printf("%.5f ", vec_get_element(&vec, i));
    }

    printf("\n");


    for (uint8_t i = 0; i < vec_get_size(&vec); i++) {
        printf("%.5f ", vec_get_element(&vec, i));
    }

    printf("\n");

    for (uint8_t i = 0; i < vec_get_size(&vec); i++) {
        printf("%.5f ", vec_get_element(&vec, i));
    }

    vec_clear(&vec);

    printf("\n");


    for (uint8_t i = 0; i < vec_get_size(&vec); i++) {
        printf("%.5f ", vec_get_element(&vec, i));
    }

    printf("\nno seg fault\n");

    return 0; 
}