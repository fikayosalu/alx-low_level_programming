#include "main.h"
/**
 * _isalpha- Checks for alphabetic character
 * @c: It represents the parameter
 * Return: 1 if successful and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
