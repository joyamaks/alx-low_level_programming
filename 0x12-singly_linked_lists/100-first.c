#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * first- run before main
 * Return: nothing
 */
void first(void) __attribute__ ((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
