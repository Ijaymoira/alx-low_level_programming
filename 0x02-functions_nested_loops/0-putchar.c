#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description - displaying a string putchar using putchar
 * Description - the arguemtn first_strin is the loop for arg s
 *  Return: Always 0 (Success)
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
