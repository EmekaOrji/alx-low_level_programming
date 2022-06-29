#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long n, i, j, k, even;

	i = 0;
	j = 1;
	even = 0;
	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if ((k % 2) == 0 && k < 4000000)
			even = even + k;
	}
	printf("%lu\n", even);

	return (0);
}
