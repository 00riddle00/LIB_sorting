#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "bubble_sort_b.h"

int* bubble_sort_b(int* target, int size)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (target[j] > target[j + 1]) {
                swap(&target[j], &target[j + 1]);

                count_ncomp++;
                count_assign += 3;
            }
        }
    }

    return target;
}


