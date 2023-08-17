#include "main.h"
/*
 * pritnt number 0-9 2,4 excluded
 * \n :newline
 * return: 0
 */
void print_most_numbers(void)
{
int c;
for (c = 0 ; c <= 9 ; c++)
{
if (c == 2 && c == 4)
{
return ;
}
else
{
_putchar(c);
}
_putchar('\n');
}
