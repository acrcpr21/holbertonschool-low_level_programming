#include <stdio.h>
/**
* main - entry point working with putchar
* Return: Always 0 (Success)
*/
int main(void)
{
/* variable characters/letters*/
char letter;
/*Loop with ASCII values of the lowercase letters (a-z)*/
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
/*this will print each letter, one by one*/
putchar('\n');
/*this prints a new line after the alphabet code*/
return (0);
}
