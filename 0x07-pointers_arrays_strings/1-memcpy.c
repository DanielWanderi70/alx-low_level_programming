#include "main.h"

/*
 * function shares memory space
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[n];
	}
	return (dest);
}

