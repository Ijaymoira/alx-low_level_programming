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
char *ptr;
unsigned int i;
if (size == 0)
return (NULL);
ptr = malloc(sizeof(char) * size);
if (ptr == NULL)
return (NULL);
else
for (i = '0'; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
