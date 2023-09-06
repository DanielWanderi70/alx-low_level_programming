#include "main.h"
#include <stdlib.h>
/*
 * description _strdup
 * @str: input string
 * return a char
 *
 */
char *_strdup(char *str)
{       
        int i;
        char  size;
        if (str == '0')
        {       
                return (0);
        }       
        else
        {
		for (i = 0; str[i] != '\0'; i++)
		{
		char *size = (char *)malloc(i * sizeof(char));
		str[i] = size[i];
		return (size);
		}
	}
}
