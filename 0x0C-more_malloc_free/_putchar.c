#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: on sucess 1.
 * on error, -1is returned,and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
