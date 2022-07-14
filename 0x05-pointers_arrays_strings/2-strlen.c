#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s: char input
 * Return: length of string
 */
int _strlen(char *s)
{
	int i

	i = 1;
	while (; *s != '\0')
	{
		s++;
		i += 1;
	}
	return (i);
