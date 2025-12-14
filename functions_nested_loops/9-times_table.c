#include "main.h"

/**
 * print_times_table - prints the multiplication table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
    int i, j;
    int val;
    int tens, units;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            val = i * j;
            /* print leading space for alignment */
            if (j != 0)
                _putchar(' ');
            if (val < 10)
                _putchar('0');
            if (val >= 100)
                _putchar('0');
            if (val >= 100)
            {
                tens = val / 100;
                _putchar(tens + '0');
                val = val % 100;
            }
            if (val >= 10)
            {
                tens = val / 10;
                _putchar(tens + '0');
                units = val % 10;
                _putchar(units + '0');
            }
            else
            {
                _putchar(val + '0');
            }
        }
        _putchar('\n');
    }
}
