#include <stdio.h>
#include <stdlib.h>

#include "sort_helpers.h"
#include "bubble_sort_b_and_c_and_e_and_f.h"

int* bubble_sort_b_and_c_and_e_and_f(int* target, int size)
{
    int i = 0;
    int j = 0;

    int count_operations;

    for (i = 0; i < size; i++) {
        if (count_operations == 0)
            break;
        count_operations = 0;
        for (j = 0; j < size - 1 - i; j++) {
            if (target[j] > target[j + 1]) {

                count_ncomp++;
                count_operations++;

                if (target[j] < target[j + 2]) {
                    swap(&target[j], &target[j + 1]);

                    count_ncomp++;
                    count_assign += 3;
                } else {
                    swap_three(&target[j], &target[j + 1], &target[j + 2]);

                    count_assign += 4;
                }
            }
        }
        for (j = size - 2 - i; j > 0; j--) {
            if (target[j] < target[j - 1]) {

                count_ncomp++;
                count_operations++;

                if (target[j] > target[j - 2]) {
                    swap(&target[j], &target[j - 1]);

                    count_ncomp++;
                    count_assign += 3;
                } else {
                    swap_three(&target[j], &target[j - 1], &target[j - 2]);

                    count_assign += 4;
                }
            }
        }
    }

    return target;
}
