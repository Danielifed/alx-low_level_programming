#include "search_algos.h"

/**
 * linear_search - this will search for an element in an array using the
 * linear search algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to be searched for
 *
 * Return: the index of the searched value or -1
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return -1;
    }

    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == value)
	{
            return i;
        }
    }

    return -1;
}
