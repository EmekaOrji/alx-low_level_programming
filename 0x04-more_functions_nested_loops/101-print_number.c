#include "main.h"

/**
 * print_number - prints a number to the terminal
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	int n0, n1, n2, n3 = n0 = n1 = n2 = n, count, digit, i;

	for (count = 0; n0 != 0; count++)
		n0 = n0 / 10;

	if (count > 1)
		for (digit = count; digit > 1; digit--)
		{
			n1 = n3;
			for (i = 1; i < digit; i++)
				n1 = n1 / 10;
			n1 = n1 % 10;
			_putchar(n1 + '0');
		}

	_putchar((n2 % 10) + '0');
}
