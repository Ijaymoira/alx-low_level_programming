#include "main.h"
/**
 * main -  entry point
 *
 * print_alphabet_x10 - print_alphabet_x10 prints 10 times the alphabeth
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
