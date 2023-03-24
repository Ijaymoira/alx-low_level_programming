#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/*
 * print_numbers - a function that prints numbers, followed by a new line.
 * @seperator:  is the string to be printed between numbers
 * @n: number of integers passed to the function
 * Returns new line at the end of the fuction
 * If separator is NULL, don’t print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
printf("%d", va_arg(ap, int));
for (i = n; i != 0; i = va_arg(ap, int))
printf("%s %d",separator, i);
if (separator == NULL)
return;
putchar('\n');
return;
}
