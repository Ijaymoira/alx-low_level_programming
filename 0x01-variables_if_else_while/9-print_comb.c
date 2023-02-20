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
{
putchar((x % 10) + '0');
if (x == '9')
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
