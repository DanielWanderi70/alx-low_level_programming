#include "main.h"
/*
 * print alphabet = prints all letters of the alphabet = new line
 */
void print_alphabet(void)
{
char alphabet;
for(alphabet='a';alphabet<'z';alphabet++);
{
_putchar(alphabet);
}
_putchar('/n');
}
