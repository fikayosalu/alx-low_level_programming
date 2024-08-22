#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *str;
	char* s;
	char *c;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	s = "Holberton!";
	c = "";
	print_rev(str);
	print_rev(s);
	print_rev(c);
	return (0);
}
