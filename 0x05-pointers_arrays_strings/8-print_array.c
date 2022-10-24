#include "main.h"
#include <stdio.h>

/**
 * print_array - Print array upto n elements
 * @a: Array to be read from
 * @n: Number of elements to be read
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
