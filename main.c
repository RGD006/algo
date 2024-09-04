#include <stdio.h>
#include <stdlib.h>
#include "algo.h"

#define ARRAY_SIZE 100

int main()
{
    int32_t* arr = (int32_t*)calloc(ARRAY_SIZE, sizeof(int32_t));

    for (int32_t i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    printf("\nfinded element: %d \n", binary_search(arr, ARRAY_SIZE, (int32_t)26));

    return 0; 
}