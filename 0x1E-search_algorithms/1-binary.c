#include "search_algos.h"

/**
 * search - performs a binary search
 * @array: the array to search
 * @right: the start index to search
 * @left: the end index to search
 * @value: the value to search for
 *
 * Return: index if element is found else -1
 */
int search(int *array, size_t left, size_t right, int value)
{
	size_t u, mid = (left + right) / 2;
	int numb;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (u = left; u <= right; u++)
	{
		printf("%d", array[u]);
		if (u != right)
			printf(", ");
	}
	printf("\n");

	numb = array[mid];

	if (numb == value)
		return (mid);
	else if (numb > value)
		return (search(array, left, mid - 1, value));
	else
		return (search(array, mid + 1, right, value));
}

/**
 * binary_search - searches for a value in an array using the
 * binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index if the value found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, 0, size - 1, value));
}
