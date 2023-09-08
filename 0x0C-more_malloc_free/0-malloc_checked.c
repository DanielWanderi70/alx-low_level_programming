#include "main.h"
#include <stdlib.h>
/*
 * description  *malloc_checked
 * @b:input
 * reurns nothing or void
 */
void *malloc_checked(unsigned int b)
{
	char *s
	s =(char *)
       
	malloc(b);
	if (b == NULL)
	{
		exit(98);
	}
	else
	{
		return (s);

	}
}

