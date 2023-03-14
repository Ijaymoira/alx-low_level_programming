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
int i;
char *ptr;
int n = size;
ptr = malloc(sizeof(char) * (n + 1));
if (ptr == NULL)
return (NULL);
else
for (i = '0'; i < (n + 1); i++)
{
*(ptr + i) = c;
}
return (NULL);
}
/*
 * cmain - Entry point to initialize a special character and size of memory
 * in the create_array function.
 * description -  it calls the create_array function
 * that creates an array of chars
 * and initializes it with specific char
 * Return: Always 0 (Success)
 */
int cmain(void)
{
char *ptr;
ptr = create_array(2, 'h');
putchar(*ptr + 1);
putchar('\n');
return (0);
}
