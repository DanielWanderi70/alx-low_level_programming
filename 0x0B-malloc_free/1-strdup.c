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
        int i = 0;
	
        char  *size;
        if (str == 0)
        {       
                return (0);
        }       
      char *size = (char *)malloc((i + 1) * sizeof(char));
       
		for (; str[i] != '\0'; i++)
		{
		str[i] = size[i];
		return (size);
		}

}
