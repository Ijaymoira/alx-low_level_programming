#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fills the first n bytes of memory area
 * pointed to by swith constant b
 * @s:  a pointer to the memory block to be filled
 * @b: character to fill memeory with
 * @n: number of bytes to be filled
 * Return: value of pointer of c with memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned char *c = s; 
unsigned char value = b;
int i;
for (i = 0; i < n; i++)
c[i] = value;
return (c);
}
