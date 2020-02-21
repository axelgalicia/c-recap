#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

#if __STDC_VERSION__ == 201112L
    #define COLON 10
#else
    #define COLON 40
#endif


void print_square(unsigned long long value);
void print_binary_in_colors(long decimal);
void red();
void green();
void blue();
void white_background();
void reset_color();

int main() {


    printf("\n\nStandard C flag __STDC__ = %d\n\n", __STDC__);
    printf("\n Standard C version flag __STDC__VERSION__ = %ld\n\n", __STDC_VERSION__);
    printf("\n Flag __x86_64__ = %d\n\n", __x86_64__);
    printf("\n COLON definition value: %d \n\n", COLON);

    // printSquare(6);
    for (long z = 0; z < 1000 ; z ++) {
                print_binary_in_colors(z);
                printf("\n");
    }

}

void print_square(unsigned long long value) {
    long result = 1;
    for (size_t i = 0; i < value; i++) {
        printf("\n%ld\n\n", result);
        result = result << 1;
    }
}

void print_binary_in_colors(long decimal) {
    int bits = 32 - 1;
    printf("%10ld is : ", decimal);
    for(int i = bits; i >= 0; i--) {
        int mask = decimal & (1 << i);
        if (mask != 0) {
            blue();
            printf("  ");
        } else {
            white_background();
            printf("  ");
        }
        reset_color();
    }
}


void red() {
    printf("\033[1;31m");
}

void green() {
    printf("\033[1;102m");
}

void white_background() {
    printf("\033[1;47m");
}

void blue() {
    printf("\33[1;44m");
}

void reset_color() {
    printf("\033[0m");
}
