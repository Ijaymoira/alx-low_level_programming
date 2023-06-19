#include "main.h"
#include <stdio.h>
/**
*_islower - checks for lower characters
*@c: characters to be verified
*Return: return 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
