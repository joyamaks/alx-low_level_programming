#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	i = *str;
		for (i = 0; i != '\0'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
}
