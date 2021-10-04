#include <stdio.h>

int main(void) 
{
	double km;
	double result;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	result = km / 1.604;
	printf("%.1lf is equal to %.1lf miles.", km, result);






	return 0;
}