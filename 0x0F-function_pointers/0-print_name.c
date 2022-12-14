#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: string
 * @f: function
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
