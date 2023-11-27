#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the file it was compiled from
 *              and returns 0.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
/* Print the name of the file using the __FILE__ macro */
printf("%s\n", __FILE__);

/* Return 0 to indicate successful execution */
return (0);
}

