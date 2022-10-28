#include "main.h"

/**
 * _strcmp - compares s1 and s2
 *
 * @s1: string to be compared against s2
 * @s2: string to be compared against s1
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int 1 = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
