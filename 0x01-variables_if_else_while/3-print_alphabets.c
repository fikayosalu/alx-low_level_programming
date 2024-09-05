#include<stdio.h>
/*
 * main - Print alphabets in lowercase and uppercase
 *
 * Return: Always return 0
 */

int main(void)
{
	char alphaL = 'a';
	char alphaU = 'A';

	while (alphaL >= 'a' && alphaL <= 'z')
	{
		putchar(alphaL);
		alphaL++;
	}
	while (alphaU >= 'A' && alphaU <= 'Z')
	{
		putchar(alphaU);
		alphaU++;
	}
	putchar('\n');
	return (0);
}
