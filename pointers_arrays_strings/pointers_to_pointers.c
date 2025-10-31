#include <stdio.h>

int main(void)
{
    int num = 42;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Value via *ptr: %d\n", *ptr);
    printf("Value via **pptr: %d\n", **pptr);

    return 0;
}
