#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
<<<<<<< HEAD
}
=======
}
>>>>>>> eeaae0998fc66caf57fe723b11820160fcbb84a9
