#include "main.h"

/**
 * swap_int - swap the value of integers
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
