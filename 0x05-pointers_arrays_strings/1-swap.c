#include "main.h"

/**
 *  swap_int - swap two intergers
 * @a: value one
 * @b: value two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
