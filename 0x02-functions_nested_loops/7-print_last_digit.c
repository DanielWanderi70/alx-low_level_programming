#include "main.h"
/*
 * functions
 */
int print_last_digit(int n)
{
int i;
if (n < 0)
{
i =  (-1 * (n % 10));
_putchar(i + '0');
return (i + '0');
}
else
{
i = (n % 10);
_putchar(i + '0');
return (i + '0');
}
}
