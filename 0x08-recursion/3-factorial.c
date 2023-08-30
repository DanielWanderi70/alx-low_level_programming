#include "main.h"
/*
 * description  factorial
 * @n: input
 * return an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{ 
		n = n * factorial(n-1);
		return (n);
	}
}
