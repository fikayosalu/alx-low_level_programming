#include<stdio.h>
/*
 * main - Print numbers from 0 - 10 using putchar
 *
 * Return: Always return 0
 */

int main(void)
{
	int digit = 0;

	while (digit >= 0 && digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
