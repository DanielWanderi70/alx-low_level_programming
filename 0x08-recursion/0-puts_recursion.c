#include "main.h"
/*
 *  _puts_recursion - description
 *  @s: string
 *  @void: returns nothing
 */
void _puts_recursion(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '\0')
			return;
		_putchar(s[i]);
	}
	_putchar('\n');
}
