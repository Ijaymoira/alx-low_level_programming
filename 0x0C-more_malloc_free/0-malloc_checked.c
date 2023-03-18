#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * Description - returns a pointer to the allocated memory
 * @b: size of memory to be allocated
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
putchar('\n');
}
