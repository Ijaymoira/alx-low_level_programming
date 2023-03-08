#include "main.h"
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
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
