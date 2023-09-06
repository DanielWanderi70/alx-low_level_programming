#include "main.h"
#include <stdlib.h>
/*
 * description create_array
 * @size: name of variable
 * @c: inputs character c
 * returns a null
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
