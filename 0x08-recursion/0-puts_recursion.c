#include "main.h"
/*
 *  _puts_recursion - description
 *  @s: string
 *  @void: returns nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;
	if (s[i] != '\0')
	{
	_putchar(s[i]);
        i++;_
	puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}


