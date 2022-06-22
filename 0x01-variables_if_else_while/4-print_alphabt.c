#include <stdio.h>

/**
 * main - print lowercase alphabets except 'q' and 'e'
 *
 * Return: 0 on success
 */
int main(void)
{
	char small_letter = 'a';

	for (; small_letter <= 'z'; small_letter++)
	{
		if (small_letter != 'q' && small_letter != 'e')
			putchar(small_letter);
	}
	putchar('\n');

	return (0);
}
