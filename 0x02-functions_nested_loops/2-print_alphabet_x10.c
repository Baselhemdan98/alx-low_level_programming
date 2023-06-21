#include "main.h"

/**
 * print_10times_alphabet - utilizes on the _putchar function to
 *			print 10 times alphabet
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
