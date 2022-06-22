#include <stdio.h>

/**
 * main - print all single digit numbers in base 10
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
