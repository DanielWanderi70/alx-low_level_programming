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
	unsigned int i;
	char arr;
if (size == 0)
{
	return (0);
}
 char *arr =(char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	return (arr);
	}
}
