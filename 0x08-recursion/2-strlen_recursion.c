#include "main.h"
/**
 * _strlen_recursion - Calculate the length of a string
 * @s: the string to count
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
