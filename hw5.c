#include <stdio.h>

int main(void)
{
	int array[5];

	printf("5개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);

	printf("홀수 출력 :");
	for (int i = 0; i < 5; i++)
	{
		if ((array[i] % 2) == 1)
		{
			printf("%d ", array[i]);
		}

	}
	printf("\n");
	printf("짝수 출력 :");
	for (int i = 0; i < 5; i++)
	{
		if ((array[i] % 2) == 0)
		{
			printf("%d ", array[i]);
		}

	}


	return 0;
}
