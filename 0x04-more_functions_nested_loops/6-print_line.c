#include "main.h"
/*
 * print_line: prints a straight line
 * prints a new line at the end
 */
void print_line(int n)
{
int i;
while (n > 0)
{
	for (i = 0; i <= n; i++)
	{
		_putchar(_);
	}
	_putchar('\n');
}
}

