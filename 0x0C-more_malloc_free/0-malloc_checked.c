#include "main.h"
#include <stdlib.h>
/*
 * description  *malloc_checked
 * @b:input
 * reurns nothing or void
 */
void *malloc_checked(unsigned int b)
{
	void *s
	s =(char *)malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);

	
}

