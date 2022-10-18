#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Retun: On success 1
 */
int _putchar(char c)
{
	retun (write(1, &c, 1));
}
