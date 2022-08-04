#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -function that executes a function given as a parameter
 * @array: array
 * @size: number of element to print
 * @action: pointer to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
