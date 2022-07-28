#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block
 * @ptr: a pointer
 * @old_size: old size in bytes
 * @new_size: the new size
 * Return: Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;

if (new_size == old_size)
	return (ptr);

if (ptr == NULL)
{
	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	return (nptr);
}
else
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
}

nptr = malloc(new_size);

if (nptr == NULL)
	return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
	nptr[i] = ((char *) ptr)[i];
}

free(ptr);
return (nptr);
}
