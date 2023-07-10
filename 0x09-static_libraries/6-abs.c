#include"main.h"

/**
 * _abs -  computes the absolute value of an intege n
 *
 * @n: takes in integer types input for function
 *
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
