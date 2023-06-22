#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: the number of times the character _
 *	should be printed
 */

void print_line(int n)
{
	int lnchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchar = 0; lnchar <= n; inchar++)
			_putchar('_');
		_putchar('\n');
	}
}
