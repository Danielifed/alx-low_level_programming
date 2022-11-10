#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Calloc function.
 * @nmemb: Number of arguments.
 * @size: Size of the argument.
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int i, var = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	j = malloc(nmemb * size);

	if (j == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < var; i++)
	{
		j[i] = 0;
	}

	return (j);
}
