#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algo.h"

#define ARRAY_SIZE_INT32 100
#define ARRAY_SIZE_STRING 10

int main()
{
    int32_t* arr = calloc(ARRAY_SIZE_INT32, sizeof(int32_t));

    for (int32_t i = 0; i < ARRAY_SIZE_INT32; i++) {
        arr[i] = i;
        printf("%d ", arr[i]);
    }

    printf("\nfinded element: %d \n", binary_search_int32_t(arr, ARRAY_SIZE_INT32, 26));

    char** string_array = calloc(ARRAY_SIZE_STRING, sizeof(char*));
    size_t* size_sub_string = calloc(ARRAY_SIZE_STRING, sizeof(size_t));

    string_array[0]    = calloc(4, sizeof(char));
    memcpy(string_array[0], _strdup("GAGS"), 4);

    string_array[1] = calloc(9, sizeof(char));
    memcpy(string_array[1], _strdup("GAGSGHAS"), 9);

    string_array[2] = calloc(3, sizeof(char));
    memcpy(string_array[2], _strdup("GAS"), 3);

    string_array[3] = calloc(5, sizeof(char));
    memcpy(string_array[3], _strdup("GGSAS"), 5);

    string_array[4] = calloc(5, sizeof(char));
    memcpy(string_array[4], _strdup("GdhxS"), 5);

    string_array[5] = calloc(5, sizeof(char));
    memcpy(string_array[5], _strdup("GAzxv"), 5);

    string_array[6] = calloc(8, sizeof(char));
    memcpy(string_array[6], _strdup("G413224"), 8);

    string_array[7] = calloc(7, sizeof(char));
    memcpy(string_array[7], _strdup("GsgdgS"), 7);

    string_array[8] = calloc(12, sizeof(char));
    memcpy(string_array[8], _strdup("Ggjsdkl;gaj"), 12);

    string_array[9] = calloc(2, sizeof(char));
    memcpy(string_array[9], _strdup("12"), 2);

    for (size_t i = 0; i < ARRAY_SIZE_STRING; i++) {
        printf("%s \n", string_array[i]);
    }

    char str[3] = "GAS";

    printf("\nfinded element: %d \n", binary_search_string(string_array, ARRAY_SIZE_STRING, str));

    free(arr);
    for (size_t i = 0; i < ARRAY_SIZE_STRING; ++i) {
        free(string_array[i]);
    }

    free(string_array);
    free(size_sub_string);

    return 0; 
}