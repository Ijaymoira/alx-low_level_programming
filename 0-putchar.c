#include <stdio.h>
/**
 * main entry point
 *
 * Description - printing putchar using putchar
 *
 * Return: Always 0 (Success)
 */
void first_strin(char *s);
int main()
{
char s[] = "putchar";
putchar('-');
first_strin(s);
putchar('\n');
return(0);
}
void first_strin(char *s)
{
int i = 0;
while (s[i] != '\0')
{
putchar(s[i]);
i++;
}
}
