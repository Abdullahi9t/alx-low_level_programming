#include <stdio.h>
/**
 * main - main block
 * Declaration: Prints all single digit number of base 10
 * Starting from 0, followed by new line.
 * Return: Always 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
