#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 * Return: x^y, -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0) // Base case: if y is negative, return -1 (error)
        return -1;
    if (y == 0) // Base case: any number raised to the power of 0 is 1
        return 1;
    
    return x * _pow_recursion(x, y - 1); // Recur with y-1 and multiply the result with x
}

