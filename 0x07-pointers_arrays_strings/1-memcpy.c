#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: a pointer to the memory area to copy
 * @src: the source buffer to copy character
 * @n: the number of bytes to coppy
 *
 * Return: A pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
