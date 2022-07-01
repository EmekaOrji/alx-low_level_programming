#include <stdio.h>

/**
 * main - prints all numbers from 1 to 100, replacing
 * multiples of 3, 5 and '3 & 5' with Fizz, Buzz, and
 * 'FizzBuzz' respectively
 *
 * Return: void
 */
void main()
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n == 100)
			break;
		putchar(' ');
	}
	putchar('\n');
}