#include"main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 *
 * @n: input number
 *
 * Return: 0 success
 */

void print_numbers(void)
{
	 int n = 0;

	 do {
		 _putchar(n + 48);
		 n++;
	 } while (num >= 0 && num <= 9);
	 _putchar('\n');
}
