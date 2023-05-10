#include "search_algos.h"

/**
 * min - finds the smallest between two numbers
 * @m: the first num
 * @n: the second num
 *
 * Return: the smallest
 */
size_t min(size_t m, size_t r)
{
	if (m > r)
		return (r);
	else
		return (m);
}

/**
 * get_at_index - gets a value at an index in a singly linked list
 * @list: the list to search
 * @index: the index to get
 *
 * Return: the value ant index or -1
 */
listint_t *get_at_index(listint_t *list, size_t index)
{
	listint_t *temp = list;

	while (temp)
	{
		if (temp->index == index)
			return (temp);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: index if value is found else -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t m = 0, r = sqrt(size);
	listint_t *temp;

	if (!list)
		return (NULL);

	temp = get_at_index(list, r);
	printf("Value checked at index[%ld] = [%d]\n", r, temp->n);
	while (temp->n < value)
	{
		m = r;
		r += sqrt(size);
		temp = get_at_index(list, min(r, size - 1));
		if (r >= size - 1)
			break;
		printf("Value checked at index[%ld] = [%d]\n", min(r, size - 1), temp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", m, min(r, size - 1));

	temp = get_at_index(list, m);
	while (temp->n <= value)
	{
		printf("Value checked at index[%ld] = [%d]\n", m, temp->n);
		if (temp->n == value)
			return (temp);
		m++;
		if (m > size - 1)
			break;
		temp = get_at_index(list, m);
	}
	return (NULL);
}
