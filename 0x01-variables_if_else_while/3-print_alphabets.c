#include <stdio.h>

/**
 * main - print lowercase and ippercase alphabets
 *
 * Return: 0 on success
 */
int main(void)
{
	char small_letter = 'a';
	char capital_letter = 'A';

	for (; small_letter <= 'z'; small_letter++)
		putchar(small_letter);
	for (; capital_letter <= 'Z'; capital_letter++)
		putchar(capital_letter);
	putchar('\n');

	return (0);
}
