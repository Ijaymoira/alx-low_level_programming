#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - returns sum of a and b
 * @a: the first integer
 * @b: the second integer
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
int difference;
difference = a - b;
return (difference);
}
/**
 * op_mul - Returns the multiplication of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The multiplication of a and b.
 */
int op_mul(int a, int b)
{
int multiply;
multiply = a * b;
return (multiply);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
int division;
division = a / b;
return (division);
}
/**
 * op_mod - Returns the modulus of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The modulus of a and b.
 */
int op_mod(int a, int b)
{
int modulus;
modulus = a % b;
return (modulus);
}
