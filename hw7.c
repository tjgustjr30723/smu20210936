#include <stdio.h>
#include <math.h>

int main(void)
{
	double array[5];
	double array1[1] = { 2 };
	double array2[1];
	printf("Enter 5 real numbers:");
	scanf_s("%lf %lf %lf %lf %lf", &array[0], &array[1], &array[2], &array[3], &array[4]);

	double* a = array;
	double* b = array1;
	double* x = array2;
	double result = 0.0;
	double total = 0.0;
	for (int i = 0; i < 5; i++)
	{
		result += a[i];
		total += pow(a[i], b[0]);
	}
	x[0] = (total / 5.0 - (result / 5.0 * result / 5.0));
	
	printf("Standard Deviation = %.3lf", sqrt(x[0]));


	return 0;
}
