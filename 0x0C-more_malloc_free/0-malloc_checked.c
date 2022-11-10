#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocated memory
 * @b: size of pointer to be allocated
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *j;

	j = malloc(b);

	if (j == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (j);
}
