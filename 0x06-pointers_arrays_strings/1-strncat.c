#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, co = 0;

	while (dest[i])
	{
		i++;
	}
	while (co < n && src[co])
	{
		dest[i] = src[co];
		i++;
		co++;
	}
	dest[i + n + 1] = '\0';
	return (dest);
}
