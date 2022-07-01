#include "main.h"

/**
 * print_triangle - prints a right-angled triangle to the terminal
 * @size: the size of the base of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
			_putchar(' ');
		for (j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
