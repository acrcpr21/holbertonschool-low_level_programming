#include "main.h"
#include <stdio.h>

/**
 *  _sqrt_helper - helper function
 * @n: number to find the sqr of
 * @sqr: the current guess for the square root
 * Return: square root
 *  Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int sqr)
if (sqr * sqr == n)
return (sqr);
if (sqr * sqr > n)
return (-1);
return (_sqrt_helper(n, sqr + 1));


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
