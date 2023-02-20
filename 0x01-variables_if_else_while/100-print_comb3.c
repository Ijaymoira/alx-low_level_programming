#include <stdio.h>
/**
 * main - entry point
 *
 * Description - Prints the combination of two digits 0-19,23-39,45-59,67-79, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
putchar((num1 % 10) + '0');
putchar((num2 % 10) + '0');
if (num1 == 9 && num2 == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
