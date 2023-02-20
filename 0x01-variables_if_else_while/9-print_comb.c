#include <stdio.h>
/**
 * main - main block
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i == 9)
			break;
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
