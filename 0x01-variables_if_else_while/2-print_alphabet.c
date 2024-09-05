#include<stdio.h>
/*
 * main - Prints alphabet in lowercase
 *
 * Return: Always return 0
 */

int main(void)
{
	char alpha = 'a';

	while (alpha >= 'a' && alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
