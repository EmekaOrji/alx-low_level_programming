#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main()
{
 	unsigned n, i, j, k;
  
	i = 0;
	j = 1;
  	for (n = 1; n <= 50; n++)
  	{
    	k = i + j;
    	i = j;
    	j = k;
    	printf("%u", k);
    	if (n < 50)
      		printf(", ");
  	}
  	printf("\n");
  
  	return (0);
}
