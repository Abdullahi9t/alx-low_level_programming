#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		put_recursion(s + 1);
	}
	else
		putchar('\n');
}