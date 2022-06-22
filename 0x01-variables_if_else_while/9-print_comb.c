#include <stdio.h>

/**
 * main - print all possible combination of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			putchar('\n');
			return (0);
		}
		putchar(',');
		putchar(' ');
	}

	return (0);
}
