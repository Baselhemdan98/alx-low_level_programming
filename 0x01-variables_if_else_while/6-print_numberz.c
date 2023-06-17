#include <stdio.h>

/**
 * main - Entry piont
 *
 * Description: print all digits
 *
 * Return: 0 (seccess)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}

