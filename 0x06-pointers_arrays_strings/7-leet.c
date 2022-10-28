#include "main.h"

/**
 * leet - Encodes a string in leet
 * @str: String to be encoded
 * Return: Always 0
 */
char *leet(char *str)
{
	int i, k;
	char s[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (s[k] != '\0')
		{
			if (str[i] == s[k])
			{
				str[i] = n[k];
			}
			k++;
		}
		i++;
	}
	return (str);
}
