#include "search_algos.h"

/**
 * linear_search - search for element in an array using the
 * linear search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index of the searched value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t u;

	if (!array)
		return (-1);

	for (u = 0; u < size; u++)
	{
		printf("Value checked array[%ld] = [%d]\n", u, array[u]);
		if (array[u] == value)
			return (u);
	}

	return (-1);
}
