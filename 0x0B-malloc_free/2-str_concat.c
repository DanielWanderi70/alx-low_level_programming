#include "main.h"
#include <stdlib>
/*
 * description str_concat
 * @s1: 1st string
 * @s2: 2nd string
 * returns a string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;
	char arr;
	if (s1 == 0 || s2 == 0)
	{
		return (0);
	}
	while (s1[i] != '/0')
	{
		i++;
	}
	unsigned int j = 0;
	while ( s2[j] != '/0')
	{
		j++;
	}
	  char *arr = (char *)malloc((i + j + 1) * sizeof(char));
	  if (arr != 0)
	  {
		  for (unsigned int len = 0; len < i; len++)
		  {
			  arr[len] = s1[i];
		  }
		  for (unsigned int gre = 0; gre < j; gre++)
		  {
			  arr[i + gre] = s2[j];
		  }
		  arr[i + j] = '/0';
	  }

	return (arr);
}


