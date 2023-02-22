#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description - displaying a string putchar using putchar
 * *s is string
 * Return: Always 0 (Success)
 */
void first_strin(char *s);
int main(void)
{
char s[] = "putchar";
putchar('_');
first_strin(s);
putchar('\n');
return (0);
}
