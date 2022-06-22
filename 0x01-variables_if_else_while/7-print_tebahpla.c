#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	char small_letter;

	for (small_letter = 'z'; small_letter >= 'a'; small_letter--)
	{
		putchar(small_letter);
	}
	putchar('\n');

	return (0);
}
