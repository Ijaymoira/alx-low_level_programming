#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @c: initialized chairacter in array
 * @size: the size of the memory
 * Return: Returns NULL if size = 0
 * or pointer to the array, or NULL if it fails
 * main - initializing the create_array function
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
int n = size;
ptr = malloc(sizeof(char) * n);
if (ptr == NULL)
return (NULL);
else
for (i = '0'; i < n; i++)
{
ptr[i] = c;
}
ptr[i] = '\0';
return (NULL);
}
