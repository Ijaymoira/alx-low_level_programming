#include <stdio.h>
/**
 * main - entry point
 *
 * Description - printing numbers in base 10 usin putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = '0'; i < '9'; i++)
putchar(i);
putchar('\n');
return (0);
}
