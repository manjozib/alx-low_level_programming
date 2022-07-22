#include<stdio.h>
/**
 * main - it prints the name of thus programme
 * @argc: number of arcgs passed to the function
 * @argv: String arguments paased to main function
 *
 * Returns: Always 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

