#include "main.h"
/*
 * the function print numbers 0-9
 * followed by a new linw
 * returns 0
 */
void print_numbers(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
_putchar('0' + i);
}
_putchar('\n');
}
