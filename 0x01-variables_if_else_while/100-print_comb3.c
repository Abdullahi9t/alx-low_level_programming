#include <stdio.h>
/**
 * main - main block
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 01;

	while (i <= 89)
	{
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
