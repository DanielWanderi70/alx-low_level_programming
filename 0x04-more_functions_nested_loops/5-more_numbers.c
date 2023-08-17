#include "main.h"
/*
 * print 0-14
 * returns:o
 */
void more_numbers(void)
{
int i;
while(i<10)
{
int c;
for (c = 0;c <= 14;c++)
{
_putchar(c);
}
i++;
_putchar('\n');
}
