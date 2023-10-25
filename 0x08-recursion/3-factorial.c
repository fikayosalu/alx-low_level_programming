#include "main.h"
/**
 * factorial - Function that returns factorial of a given number
 * @n: Parameter of the function
 *
 * Return: To the retun the factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
