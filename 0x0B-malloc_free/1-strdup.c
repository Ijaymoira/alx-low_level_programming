#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *ptr;
str = malloc(sizeof(char));
if (str == NULL)
return (NULL);
else
while (*str)
*ptr = *str;
str++;
ptr++;
return (ptr);
}
