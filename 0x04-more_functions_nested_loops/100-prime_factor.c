#include <stdio.h>

/**
 * main - entry point
 *
 * Description: finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num /= count;
		}
	}
	printf("%lu\n", count);
}
