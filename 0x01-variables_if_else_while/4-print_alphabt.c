#include<stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabets except q and e
 *
 * Return: Return 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
