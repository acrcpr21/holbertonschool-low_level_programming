#include "main.h"
#include <stdio.h>

/**
 * _memcpy "Will copy the memory area."
 * @dest "It is the memory area to copy towards from the destination."
 * @src "It is the memory area to copy from the source."
 * @n "It is the number of the bytes to copy."
 *
 * return "It is the pointer to the destination memory area destination."
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
        {
            dest[i] = src[i];
        }

        return (dest);
}
