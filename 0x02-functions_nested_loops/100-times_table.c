#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * @n: number of timetable to be printed
 * Return: void
 */
void print_non_zeros(int n, int column, int row, int digit);

void print_times_table(int n)
{
	int column, row, digit;

	if ((n <= 15) && (n >= 0))
	{
		if (n == 0)
		{
			_putchar('0');
			_putchar('\n');
		}
		else
		{
			print_non_zeros(n, column, row, digit);
		}
	}
}

void print_non_zeros(int n, int column, int row, int digit)
{
	row = 0;
	column = 1;
	while (row <= n)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		while (column <= n)
		{
			digit = (column * row);
			if (digit <= 99)
			{
				if ((digit / 10) > 0)
				{
					_putchar(' ');
					_putchar((digit / 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((digit % 10) + '0');
			}
			else
			{
				_putchar(((digit / 10) /10) + '0');
				_putchar(((digit / 10) % 10) + '0');
				_putchar((digit % 10) + '0');
			}
			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}
