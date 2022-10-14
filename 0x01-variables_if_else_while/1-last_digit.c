#include<stdlib.h>
#include<time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int y;

	y = n % 10;
	if (y > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, y);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n" n, y);
	}
	return (0);
}
