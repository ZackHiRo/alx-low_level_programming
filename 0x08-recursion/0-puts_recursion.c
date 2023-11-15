#include "main.h"

/**
* _puts_recursion - Prints a string, followed by a new line, recursively.
* @s: The string to be printed.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') // Base case: if the current character is null terminator
{
_putchar('\n'); // Print a new line
return;
}
_putchar(*s); // Print the current character
_puts_recursion(s + 1); // Recur for the next character in the string
}

