#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 1, end = 0;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	array = (char *)malloc(i * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);
	while (end < i)
	{
		s[end] = str[end];
		end++;
	}
	s[end] = '\0';
	return (s);
}
