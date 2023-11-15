#include "main.h"

/**
* is_prime_number - Checks if a number is a prime number.
* @n: The number to check.
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
return (check_prime(n, 2)); /* Start checking for prime from divisor 2 */
}

/**
* check_prime - Helper function to check if a number is prime recursively.
* @n: The number to check.
* @divisor: The current divisor being tested.
* Return: 1 if n is prime, 0 otherwise.
*/
int check_prime(int n, int divisor)
{
if (n <= 1) /* If n is 1 or less, it's not a prime number */
return (0);
if (divisor > n / 2) /* If the divisor exceeds half of n, n is prime */
return (1);
if (n % divisor == 0) /* If n is divisible by divisor, it's not a prime number */
return (0);

return check_prime(n, divisor + 1); /* Recur with the next divisor */
}

