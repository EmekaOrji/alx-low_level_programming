#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * 
 * Return: void
 */
void times_table(void)
{
	int column, row, digit;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			digit = (column * row);
			if ((digit / 10) > 0)
				_putchar((digit / 10) + '0');
			else
				_putchar(' ');
			_putchar((digit % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
