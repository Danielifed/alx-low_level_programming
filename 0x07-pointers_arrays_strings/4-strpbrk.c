#include "main.h"

/**
 * _strpbrk - searches a string for any set of a byte
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
