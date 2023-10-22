#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: Square root of n, -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 * Return: Square root of n, -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (find_sqrt(n, i + 1));
}

