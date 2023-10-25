#include "main.h"
#include <unistd.h>

/**
* _puts - Writes a string to the standard output followed by a newline.
* @s: The string to be written.
*/
void _puts(char *s)
{
while (*s != '\0')
write(1, s++, 1);
write(1, "\n", 1);
}

