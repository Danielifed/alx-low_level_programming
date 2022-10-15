#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - entry point
 *
 * Description: assign random number to the variable
 *
 * Return: Retun 0 on success
 */
int main(void)
{
	int n;
	int m;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, m);
	}
	else if (m == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, m);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, m);
	}
	return (0);
}