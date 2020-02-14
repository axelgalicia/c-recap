#include <stdio.h>

#include "01_print.h"

void printFormat()
{
    double A[5] = {
        [0] = 15.0,
        [1] = 2.9,
        [2] = 4.E+25,
        [4] = .00008,
    };

    for (size_t i = 0; i < 5; i++)
    {
        printf("Element %zu is %g, \tits square is %g\n", i, A[i], A[i] * A[i]);
    }
}

