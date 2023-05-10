#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t start = 0;
	size_t end = size - 1;

	while (start <= end)
	{
		size_t mid = (start + end) / 2;

		printf("Searching in array: ");
		for (size_t u = start; u <= end; u++)
		{
			printf("%d", array[u]);
			if (u < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
