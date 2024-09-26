#include "main.h"
#include<stdio.h>
/**
 * main - Tests basic math operations
 *
 * Return: Always return 0
 */

int main(void)
{
	int a = 7;
	int b = -9;

	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));
	printf("%d\n", mul(a, b));
	printf("%d\n", div(a, b));
	printf("%d\n", mod(a, b));
	return (0);
}
