#include<stdio.h>
/*
 * main - Print lowercase alphabet in reverse
 *
 * Return: Always return 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha <= 'z' && alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
