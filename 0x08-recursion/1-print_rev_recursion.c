#include "main.h"
/*
 * description _print_rev_recursion
 * @s:inputs character s
 * @void - returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

