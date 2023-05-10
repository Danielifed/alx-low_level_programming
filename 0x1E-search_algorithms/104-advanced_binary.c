#include "search_algos.h"

/**
 * _search - this will perform a binary search
 * @array: the array to search
 * @begin: the begin index to search
 * @end: the end index to search
 * @value: the value to search for
 *
 * Return: index if element is found else -1
 */
int _search(int *array, size_t begin, size_t end, int value)
{
	size_t g, midium = (begin + end) / 2;
	int numb, scan;

	if (begin > end)
		return (-1);

	printf("Search in array: ");
	for (g = begin; g <= end; g++)
	{
		printf("%d", array[g]);
		if (g != end)
			printf(", ");
	}
	printf("\n");

	numb = array[midium];

	if (numb == value)
	{
		if (midium == 0 || array[midium - 1] != value)
			return (midium);
		scan = _search(array, begin, midium, value;
		return (scan);
	}
	else if (numb > value)
		return (_search(array, begin, midium - 1, value));
	else
		return (_search(array, midium + 1, end, value));
}

/**
 * advanced_binary - this searches for a value in an array using the
 * binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: index if the value found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (_search(array, 0, size - 1, value));
}
