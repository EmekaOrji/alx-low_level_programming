#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * @n: number of timetable to be printed
 * Return: void
 */
void print_non_zeros(int n, int column, int row, int digit)
{
	for (row = 0; row <= n; row++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (column = 1; column <= n; column++)
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
			}
			_putchar('\n');
		}
}
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