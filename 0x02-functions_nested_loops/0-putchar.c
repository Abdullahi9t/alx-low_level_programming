#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 *
 * Return: on success 1.
 */

int _putcchar(char c)
{
	return (write(1, &c, 1);;
}
