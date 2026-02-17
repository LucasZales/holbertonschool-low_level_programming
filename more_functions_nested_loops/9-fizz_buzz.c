#include <stdio.h>

/**
 *main-description
 *Return:0 when complete.
 */

int main(void)
	{
	int Num = 1;

	while (Num <= 100)
	{
	if (Num % 3 == 0 && Num % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (Num % 3 == 0)
	{
	printf("Fizz");
	}
	else if (Num % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", Num);
	}
	if (Num != 100)
	printf(" ");
	Num++;
	}
	printf("\n");
	return (0);
	}
