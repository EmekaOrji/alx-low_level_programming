#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int letter;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
