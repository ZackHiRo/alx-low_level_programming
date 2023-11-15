#include "main.h"

/**
* _strlen_recursion - Returns the length of a string, recursively.
* @s: The string to find the length of.
* Return: Length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: if the current character is null terminator */
return (0);

return (1 + _strlen_recursion(s + 1));
/* Recur for the next character and add 1 to the length*/
}

