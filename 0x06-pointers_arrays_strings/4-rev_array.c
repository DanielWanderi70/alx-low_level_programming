#include "main.h"
/*
 * function reverses the position of arrays
 */
void reverse_array(int *a, int n)
{
int i, j, t;
	
	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

	
}
