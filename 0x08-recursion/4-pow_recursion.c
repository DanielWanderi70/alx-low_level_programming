#include "main.h"
/*
 * description _pow_recursion
 * @x:input
 * @y:input 
 * return an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}
