#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks if a char is uppercase
*@c: interger c passed in as a parameter
 *Return: returns 1 if true and 0 if otherwise
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
return (0);
}

