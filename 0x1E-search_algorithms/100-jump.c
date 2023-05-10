#include "search_algos.h"

/**
 * min - will find the smallest number between two numbers
 * @g: the first num
 * @p: the second num
 *
 * Return: the smallest
 */
size_t min(size_t g, size_t p)
{
	if (g > p)
		return (p);
	else
		return (g);
}

/**
 * jump_search - searche for value in an array using a
 * jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: index if value is found else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t g = 0, p = sqrt(size);

	if (!array)
		return (-1);

	while (array[min(p, size) - 1] < value)
	{
		g = p;
		p += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", g, array[g]);
		if (p >= size)
			p = size - 1;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", g, p);

	while (array[g] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", g, array[g]);
		if (array[g] == value)
			return (g);
		if (g > size - 1)
			break;
		g++;
	}
	return (-1);
}
