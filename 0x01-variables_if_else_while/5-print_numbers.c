#include<stdio.h>
/*
 * main - Print single digit numbersof base 10
 * starting from 0
 *
 * Return: Always return 0
 */

int main(void)
{
	int digit = 0;

	while (digit >= 0 && digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
