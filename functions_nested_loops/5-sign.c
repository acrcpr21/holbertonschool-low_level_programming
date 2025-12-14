#include "main.h"

/**
 * _sign - determines the sign of a number
 * @n: integer to evaluate
 *
 * Return: 1 if n > 0, -1 if n < 0, 0 if n == 0
 */
int print_sign(int n)
{
if (n > 0)
_putchar('+');
return 1;
if (n < 0)
_putchar('-');
return -1;
_putchar('0');
return 0;
}
