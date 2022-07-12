#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: char input
 */
void puts_half(char *str)
{
	int i, n, y;

	y = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		y++;
	}
	n = (y / 2);
	if ((y % 2) == 1)
		n = ((y + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
