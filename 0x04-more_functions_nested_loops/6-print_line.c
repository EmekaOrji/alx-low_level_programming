#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n - the number of underscores(_) to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
