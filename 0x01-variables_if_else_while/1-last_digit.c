#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: last digit of a given number and if
 *
 * Return: Always 0(Success)
 */
int main(void)
{
int n, is;
scanf("%d", &n);
srand(time(0));
n = rand() - RAND_MAX / 2;
is = n % 10;
/* your code goes there */
printf("Last digit of %d is %d", n, is);
if (is > 5)
printf("%d and is greater than 5\n", is);
if (is == 0)
printf("%d and is 0\n", is);
if (is < 6 && is != 0)
printf("%d and is less than 6 and not 0\n", is);
return (0);
}
