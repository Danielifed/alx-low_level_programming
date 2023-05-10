#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0, end = size - 1, mid;

	if (!array)
		return (-1);

	while (begin <= end)
	{
		mid = (begin + end) / 2;
		printf("Searching in array: ");
		print_array(array, begin, end);

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			begin = mid + 1;

		else
			end = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers
 * @array: A pointer to the first element of the array to print
 * @begin: The leftmost index to print
 * @end: The rightmost index to print
 */
void print_array(int *array, size_t begin, size_t end)
{
	size_t u;

	for (u = begin; u <= end; u++)
	{
		printf("%d", array[u]);

		if (begin != end)
			printf(", ");
	}

	printf("\n");
}
