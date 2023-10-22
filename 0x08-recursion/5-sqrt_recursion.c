#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: Square root of n, -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return find_sqrt(n, 1); // Start the search for square root from 1
}

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 * Return: Square root of n, -1 if n does not have a natural square root.
 */
int find_sqrt(int n, int i)
{
    if (i * i > n) // If i*i exceeds n, n doesn't have a natural square root
        return -1;
    if (i * i == n) // If i*i equals n, i is the square root of n
        return i;
    
    return find_sqrt(n, i + 1); // Recur with the next guess for the square root
}

