#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}