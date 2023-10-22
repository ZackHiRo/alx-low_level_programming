#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, recursively.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0') // Base case: if the current character is null terminator
        return;
    
    _print_rev_recursion(s + 1); // Recur for the next character in the string
    _putchar(*s); // Print the current character
}

