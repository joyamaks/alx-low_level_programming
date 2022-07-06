#include <stdio.h>
#include "main.h"
/**
 * print_to_98 -> prints n to 98
 * @n: first number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
			}
			else
			{
				_putchar(n);
				_putchar(' ');
			}
			n = n + 1;
		}
	}
		else if (n > 98)
		{
			while (n >= 98)
			{
				if (n == 98)
				{
					_putchar(n);
					_putchar('\n');
				}
				else
				{
					_putchar(n);
					_putchar('\n');
				}
				n = n - 1;
			}
		}
}
