#include <stdio.h>
/**
 * main - entry point
 *
 * Description - printing all letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
for (x = 0; x <= 26; x++)
if (x == 'e' && x == 'q')
putchar('a' + x);
putchar('\n');
return (0);
}
