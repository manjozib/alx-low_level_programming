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
(void) *argv;
printf("%d\n", (argc - 1));
return (0);
}

