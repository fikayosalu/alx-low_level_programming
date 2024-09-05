#include<stdio.h>
/*
 * main - Prints all possible combinations
 * of single-digit numbers
 *
 * Return: Always return 0
 */

int main(void)
{
	int digit = 0;

	while (digit >= 0 && digit <= 9)
	{
		putchar('0' + digit);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
