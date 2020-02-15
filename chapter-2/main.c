/**
 * Chapter 2: Definitions and formats
 * 
 */

#include <stdio.h>
#include "sum.h"

int main(void) {

    long double num1 = 1223456780.1234L;
    long double num2 = 2.2L;

    printf("\n\nThe result of adding %Lf by %Lf and multiplying by factor %d is %.4Lf: \n\n",
           num1,
           num2,
           FACTOR,
           sum(num1, num2));
}
