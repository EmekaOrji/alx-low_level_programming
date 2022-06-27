#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *counter = "_putchar";

	while (*counter)
	{
		_putchar(*counter);
		counter++;
	}
	_putchar('\n');

	return (0);
}
