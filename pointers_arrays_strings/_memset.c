#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: byte to fill with
 * @n: numebr of bytes
 *
 * Return: pointer to the memory area s
 */
 char *_memset(char *s, unsigned char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        s[i] = b;

    return (s);
}
