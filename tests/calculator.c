#include <stdio.h>
#include "math.h"


int main(int argc, char *argv)
{
	
	double first_num;
	double second_num;

	printf("Introduce first number:");
	scanf("%lf", &first_num);
	printf("\nIntroduce second number:");
	scanf("%lf", &second_num);

	printf("\n Sum of %lf + %lf is: %lf",first_num, second_num, sum(first_num, second_num));
}
