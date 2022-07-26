#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);

	cents += n / 25;
	n = n % 25;
	cents += n / 10;
	n = n % 10;
	cents += n / 5;
	n = n % 5;
	cents += n / 2;
	n = n % 2;
	cents += n / 1;

	printf("%d\n", cents);
	return (0);
}
