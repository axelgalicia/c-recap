#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#if __STDC_VERSION__ == 201112L
    #define COLON 10
#else
    #define COLON 40
#endif


void printSquare(unsigned long long value);
void printBinary(long decimal);
void red();
void green();
void blue();
void whiteBackground();
void resetColor();
void test();

int main() {

    uint8_t myMini = 253;


    printf("\n\nStandard C flag __STDC__ = %d\n\n", __STDC__);
    printf("\n Standard C version flag __STDC__VERSION__ = %ld\n\n", __STDC_VERSION__);
    printf("\n Flag __x86_64__ = %d\n\n", __x86_64__);
    printf("\n COLON definition value: %d \n\n", COLON);
    myMini += 1;
    //printf("\n Number %d defined as int8_t adding 1 will overflow: \n\n %d", myMini, myMini);
   
    //printSquare(6);
    // for (long z = 0; z < 1000 ; z ++) {
    //             printBinary(z);
    //             printf("\n");
    // }
    
    //printf("\n\n %s \n\n", __func__);

   // test();

   for(int g=0; g < 100 ; g++) {
        int m = 3;
        int *p = &m;
        printf("\n\n%p\n\n", &p);
   }



}

void printSquare(unsigned long long value) {
    long result = 1;
    for (size_t i = 0; i < value; i++) {
        printf("\n%ld\n\n", result);
        result = result << 1;
    }
}

void printBinary(long decimal) {
    int bits = 32 - 1;
    printf("%10ld is : ", decimal);
    for(int i = bits; i >= 0; i--) {
        int mask = decimal & (1 << i);
        if (mask != 0) {
            blue();
            printf("  ");
        } else {
            whiteBackground();
            printf("  ");
        }
        resetColor();
    }
}


void red() {
    printf("\033[1;31m");
}

void green() {
    // printf("\033[1;92m");
    printf("\033[1;102m");
}

void whiteBackground() {
    printf("\033[1;47m");
}

void blue() {
    printf("\33[1;44m");
}

void resetColor() {
    printf("\033[0m");
}

void test() {
    int z[] = {1,2,3,4,5,6,7,8,9};
    for (int m = 0 ; z[m] != '\0'; m++) {
        printf("%d\n",z[m]);
    }
}