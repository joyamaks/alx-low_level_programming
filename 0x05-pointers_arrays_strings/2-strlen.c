#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string
 * @s: char input
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int sum;
	char len;

	i = 1;
	sum = 0;
	len = s[0];
	while (len != '\0')
	{
		sum++;
		len = s[i++];
	}
	return (sum);
}
