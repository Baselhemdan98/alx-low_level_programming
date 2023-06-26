#include"main.h"

/**
 * swap_int -  function that swaps the values of two integers
 *		a and b
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

