#include<stdio.h>
/*
 * main - Print all munbers of base 16 in lowercase
 *
 * Return: Always return 0
 */

int main(void)
{
	int digit = 0;
	char alpha = 'a';

	while (digit >= 0 && digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}
	while (alpha >= 'a' && alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
