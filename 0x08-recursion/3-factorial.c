#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 * Return: Factorial of n, -1 if n is negative.
 */
int factorial(int n)
{
if (n < 0) /* Base case: if n is negative, return -1 (error) */
return (-1);
if (n == 0) /* Base case: factorial of 0 is 1 */
return (1);
    
return (n * factorial(n - 1));
/* Recur with n-1 and multiply the result with n */
}

