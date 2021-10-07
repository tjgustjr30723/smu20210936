#include <stdio.h>

int main(void)
{
	int num;
	scanf_s("%d", &num);

	for (int n = 2; n < num; n++)
	{
		if ((num % n) == 0)
		{
			printf("it is not a prime number");
			break;
		}
		if (num - 1 == n)
			printf("it is a prime number");
	}


	return 0;
}