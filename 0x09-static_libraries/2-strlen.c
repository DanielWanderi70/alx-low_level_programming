#include "main.h"
/*
 * pritnts the length 
 * ?
 */
int _strlen(char *s)
{

int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

