#include "main.h"
/*
 * function copies characters from one string to onother
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && i != '\0'; i++)
	{
		scr[i] = dest[i];
	}
	while (i < n)
	{
		dest[i] = '\0';


	}
	return (dest);
}


