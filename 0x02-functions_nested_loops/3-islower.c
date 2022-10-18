#include "main.h"
/**
 * islower - checks if a character is lowercase
 * @c: character to test
 * Description: checks if a character is a lowercase
 * Return: 1 if letter is lower case, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
