#include <stdio.h>
/**
* main - Entry point working with putchar and commas
* Return: Always 0 (Success)
*/
int main(void)
{
int numbers;
for (numbers = 48; numbers <= 57; numbers++)
putchar(numbers);
if (numbers < 57)

putchar(',');
putchar(' ');

return (0);
}
