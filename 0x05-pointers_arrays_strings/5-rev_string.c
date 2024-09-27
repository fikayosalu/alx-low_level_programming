#include"main.h"
#include<stdio.h>
/**
 * rev_string - returns a reverse string
 * @s: the string to be reversed
 *
 * Return: No return value
 */

void rev_string(char *s)
{
	int index = 0;
	int i = 0;
	int n;
	char temp;

	while (s[index] != '\0')
		index++;

	n = index - 1;
	while (i < n)
	{
		temp = s[i];
		s[i] = s[n];
		s[n] = temp;
		i++;
		n--;
	}
}
