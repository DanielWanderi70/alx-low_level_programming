#include "main.h"
/*
 * description -  _strlen_recursion
 * @*s: input
 * returns an interger
 */
int _strlen_recursion(char *s)
{       
        int i;
        if (*s != '\0')
             i = 1 +  _strlen_recursion(s + 1);
	     return (i);	
}
