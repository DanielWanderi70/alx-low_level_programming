#include "main.h"
/*
 * description create_array
 * @size: name of variable
 * @c: inputs character c
 * returns a null
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
	return NULL;
}
else
{
	c = malloc(size * sizeof(char));
	return (c);
}
}
