#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
int i;
for (i = 0; i != '\0'; i++)
return;
f(name);
}
