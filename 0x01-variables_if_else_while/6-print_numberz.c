#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always Return 0
 */
int main(void)
{
	int r = 0;

	for (; r < 10; r++)
		putchar('0' + r);
	putchar('\n');
	return (0);
}
