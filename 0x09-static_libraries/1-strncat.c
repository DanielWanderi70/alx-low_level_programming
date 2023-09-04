#include  "main.h"
/*
 * function appends two strings
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int  j;
	for (j = 0; dest[j] != '\0'; j++)
	{
		for (n = 0; src[n] != '\0' && j < n; n++)
		{
			dest[j] = src[n];
			j++;
		}

	}
	dest[j] = '\0';
	return (dest);
}
