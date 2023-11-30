#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Number of arguments
* @argv: Array of argument strings
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int num_bytes, i;
unsigned char *main_address;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

main_address = (unsigned char *)main;

for (i = 0; i < num_bytes - 1; i++)
printf("%02x ", main_address[i]);
printf("%02x\n", main_address[i]);

return (0);
}

