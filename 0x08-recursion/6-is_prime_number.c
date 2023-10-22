#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor being tested.
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor > n / 2)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (check_prime(n, divisor + 1));
}

