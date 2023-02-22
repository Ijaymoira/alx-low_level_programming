#include <stdio.h>
/**
 * main - entry point
 *
 * Description - Prints the combination of two digits 0-19,23-39,45-59,67-79, numbers separated by
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = '0';
int b = '0';
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (!((a == b) || (b > a)))
{
putchar(a);
putchar(b);
if (!(a == '9' && b == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
