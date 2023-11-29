#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name using the provided function pointer
* @name: name of the person
* @f: function pointer to a printing function
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}

/**
* print_name_uppercase - print a name in uppercase
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i = 0;
printf("Hello, my uppercase name is ");
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
printf("\n");
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}

