#include "main.h"
/*
 * isalpha
 */
int _isalpha(int c)
{
if (c >= 'A' || c >= 'a' && c <= 'Z' || c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
