#include "main.h"
/*
 * function: draws  diagonal line across
 * return 0
 */
void print_diagonal(int n)
{
int i, j, p, x;
while (i < n && n > 0)
{
	for (p = 0; p < n; p++)
	{
		for (j = 0; j < p; j++)
		{
			for (x = 0; x < j; x++)
			{
				_putchar(\);
			}
			_putchar( );
		}
		_putchar('\n');
	}
}
_putchar('\n');
}
