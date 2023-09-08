#include "main.h"
#include <stdlib.h>
/*
 * description  *malloc_checked
 * @b:input
 * reurns nothing or void
 */
void *malloc_checked(unsigned int b)
{
char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
