#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: interger value to get last number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int la;

	if (n < 0)
		n = -n;
	la = n % 10;

	if (la < 0)
		la = -la;
	_putchar(la + '0');
	return (la);
}

