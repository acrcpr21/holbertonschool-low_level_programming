#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = _atoi("-98");
    printf("%d\n", n);
    n = _atoi("------++++++-----+++++--98");
    printf("%d\n", n);
    n = _atoi("Suite 402");
    printf("%d\n", n);
    n = _atoi(" + + - -98 Battery Street; San Francisco, CA 94111 - USA ");
    printf("%d\n", n);
    n = _atoi("2147483647");
    printf("%d\n", n);
    n = _atoi("-2147483648");
    printf("%d\n", n);
    return (0);
}
