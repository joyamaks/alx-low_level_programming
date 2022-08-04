#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -function that prints name
 * @name: name of a person
 * @f: pointer to print upper or lower
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
