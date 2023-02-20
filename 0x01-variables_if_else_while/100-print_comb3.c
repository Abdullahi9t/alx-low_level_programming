#include <stdio.h>
/**
 * main - main block
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i <= 89)
	{
		putchar(i + '0');
		if (i == 89)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
