#include "search_algos.h"

/**
 * binary_search - this will perform a binary search
 * @array: the array to be searched
 * @size: the size of index to search
 * @value: the value to be searched for
 *
 * Return: index if element is found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
