#include <stdio.h>
/**
 * main - entry point
 *
 * Description - printing lower case in reverse form
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
