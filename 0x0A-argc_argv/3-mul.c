#include<stdio.h>
#include<stdlib.h>
/**
 * main - it prints the name of thus programme
 * @argc: number of arcgs passed to the function
 * @argv: String arguments paased to main function
 *
 * Returns: Always 0
 */

int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
}
else
{
printf("Error\n");
}
return (0);
}

