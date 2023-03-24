#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
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
