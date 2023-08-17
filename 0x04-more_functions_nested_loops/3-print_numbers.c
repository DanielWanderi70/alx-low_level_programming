#include "main.h"
/*
 * the function print numbers 0-9
 * followed by a new linw
 * returns 0
 */
void print_numbers(void)
{
for (int i = 0 ; i <= 9 ; i++)
{
_putchar(i);
return (i);
}
_putchar('\n');
}
