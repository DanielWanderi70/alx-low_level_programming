#include "main.h"
/*
 * pritnt number 0-9 2,4 excluded
 * \n :newline
 * return: 0
 */
void print_most_numbers(void)
{
int c = 0;
while (c <= 9 && c != 4 && c != 5)
{
_putchar(c);
c++;
}
_putchar('\n');
}
