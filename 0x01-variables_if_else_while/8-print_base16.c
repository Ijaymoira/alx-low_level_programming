#include <stdio.h>
/**
 * main - entry point
 *
 * Description - printing the first base 16 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
char i;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
