#include <stdio.h>
/**
 * main - entry point
 *
 * Description - outputtng numbers plus a comma to seperate it.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
if (x > '0')
putchar(',');
putchar(' ');
putchar(x);
putchar('\n');
return (0);
}
