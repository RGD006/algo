#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algo.h"

#define ARRAY_SIZE_INT32 100
#define ARRAY_SIZE_STRING 10

int main()
{
    my_string_t arr[ARRAY_SIZE_STRING];

    arr[0] = init_string_t("1", 1);
    arr[1] = init_string_t("1", 1);
    arr[2] = init_string_t("1", 1);
    arr[3] = init_string_t("24", 2);
    arr[4] = init_string_t("23", 2);
    arr[5] = init_string_t("25", 2);
    arr[6] = init_string_t("26", 2);
    arr[7] = init_string_t("333", 3);
    arr[8] = init_string_t("367", 3);
    arr[9] = init_string_t("6326", 4);

    printf("finded element: %d\n", binary_search_my_string_t(arr, ARRAY_SIZE_STRING, init_string_t("23", 2)));

    return 0; 
}