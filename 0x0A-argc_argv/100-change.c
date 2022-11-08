#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: amount of arguments passed through the program
 * @argv: pointer that contains the arrays of the arguments
 * Return: the minimum number of cins needed to make the change
 */
int main(int argc, char *argv[])
{
	int x = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 0)
	{
		if (money - 25 >= 0)
		{
			money = money - 25;
		}
		else if (money - 10 >= 0)
		{
			money = money - 10;
		}
		else if (money - 5 >= 0)
		{
			money = money - 5;
		}
		else if (money - 2 >= 0)
		{
			money = money - 2;
		}
		else if (money - 1 == 0)
		{
			money = money - 1;
		}
		x++;
	}
	printf("%d\n", x);
	return (0);
}
