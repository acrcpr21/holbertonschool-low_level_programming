#include "main.h"
#include <stdio.h>

int main(void)
{
    /* pointer test */
    int num = 42;
    int *ptr = &num;   /* pointer to int */
    int **pptr = &ptr; /* pointer to pointer to int */
    int i;  /* loop counter */

    /* _memset test */
    char buffer[98] = {0};  /* buffer initialized to 0 */
    _memset(buffer, 0x01, 95);  /* fill first 95 bytes with 0x01 */

    printf("num = %d\n", num);
    printf("*ptr = %d\n", *ptr);
    printf("**pptr = %d\n", **pptr);
    printf("---\n");

    printf("_memset test:\n");
    for (i = 0; i < 98; i++)
    {
        printf("0x%02x ", buffer [i]);  /* print each byte in hex */
    }
        printf("\n");

    return 0;
}
