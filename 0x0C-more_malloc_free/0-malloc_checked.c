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
int *ptr, n;
n = 98;
ptr = malloc(sizeof(int) * b);
return (ptr);
if (ptr == NULL)
printf("%d", n);
exit(EXIT_SUCCESS);
putchar('\n');
}
