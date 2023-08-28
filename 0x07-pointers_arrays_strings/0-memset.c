#include "main.h"
/*
 * functions that fills a memory with a constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
		n--;
	}
}

