#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}
