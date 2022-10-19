#include "main.h"

/**
 * _isalpha - tests if a character is an english alphabet
 * @c: character to be checkded
 * Return: 1 if the character is english, 0 if not english
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
