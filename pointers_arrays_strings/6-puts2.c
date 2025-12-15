#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 */
void puts2(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
