#include "main.h"
#include <time.h>

/**
 * print_time - prints the current time in HH:MM format (24-hour clock)
 *
 * Return: void
 */

void jack_bauer(void)
{
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    int hour = tm_info->tm_hour;
    int minute = tm_info->tm_min;
    int h1 = hour / 10;
    int h2 = hour % 10;
    int m1 = minute / 10;
    int m2 = minute % 10;

    _putchar(h1 + '0');
    _putchar(h2 + '0');
    _putchar(':');
    _putchar(m1 + '0');
    _putchar(m2 + '0');
    _putchar('\n');
}