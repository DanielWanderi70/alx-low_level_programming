#include "main.h"
/*
 * the function compares two strings
 */
int _strcmp(char *s1, char *s2)
{
	int n;

for (n = 0; s1[n] != '\0'; n++)
{
if (s1[n] > s2[n])
return (s1[n] - s2[n]);
if (s2[n] > s1[n])
return (s1[n] - s2[n]);
}
return (0);
}
