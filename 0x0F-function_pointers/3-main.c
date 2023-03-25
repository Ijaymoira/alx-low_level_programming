#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int x = 0;
if (argc != 4)
printf("error\n");
exit(98);
if ((('+') || ('-') || ('*') || ('/') || ('%')) == (0))
printf("error\n");
exit(99);
if (((num1 && num2) == 0) && (('/' || '%') / (x)))
printf("error\n");
exit(100);
}
