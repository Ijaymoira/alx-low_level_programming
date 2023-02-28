#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0, index;
while (*s != '\0')
{
len++;
s++;
}
s--;
for (index = len; index > 0; index--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
