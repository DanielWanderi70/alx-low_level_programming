#include "main.h"
/*
 * the function is void
 */
void print_alphabet_x10(void)
{
char alphabet;
int i=0;
for (i=0;i<9;i++)
{
for (alphabet='a';alphabet<='z';alphabet++)
{
_putchar(alphabet);
}
return (0);
}
_putchar('/n');
}

