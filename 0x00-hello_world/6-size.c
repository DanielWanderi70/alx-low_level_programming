#include <stdio.h>
/**
 * main entry point
 *
 * return 0 always success
 */
int main(void)
{
	printf("size of char: %d byte(s)/n", sizeof(char));
printf("size of int: %d byte(s)/n",sizeof(int));
printf("size of a long int : %d byte(s)/n", sizeof(long int));
printf("size of long long int : %d byte(s)/n", sizeof(long long int));
printf("size of a float : %d byte(s)/n", sizeof(float));
return 0;
}
