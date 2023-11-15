#include "main.h"
#include <stdio.h>

/**
 * puts_recursion - Prints a string using recursion.
 *
 * This function prints each character of the string `s`
 * followed by a newline character using recursion.
 *
 * @s: The input string.
 */
void puts_recursion(char *s)
{
*s ? (putchar(*s), puts_recursion(s + 1)) : putchar('\n');
}

