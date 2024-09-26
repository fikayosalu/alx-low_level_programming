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

	while (s[index] != '\0')
		index++;
	
	while (index >= 0)
	{
		s[i] = s[index];
		i++;
		index--;
	}
}
