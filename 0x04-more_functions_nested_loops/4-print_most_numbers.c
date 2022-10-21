#include "main.h"

/**
 * print_most_numbers - prints 0 to 9
 *
 * Retun: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int i = 0

	while (i < 0)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
