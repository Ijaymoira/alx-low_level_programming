#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description - displaying a string putchar using putchar
 *
 * Return: Always 0 (Success)
 */
void first_strin(char *s);
int main()
{
char s[] = "putchar";
putchar('_');
first_strin(s);
putchar('\n');
return (0);
}
