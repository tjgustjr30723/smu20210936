#include <stdio.h>

int culcu(int num);

int main(void)
{
	int num;
	printf("Please enter a number :");
	scanf_s("%d", &num);
	culcu(num);
	return 0;
}

int culcu(int num)
{
	if (num == 0 || num == 1)
	{
		printf("%d", num);
	}
	else
	{
		culcu(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}