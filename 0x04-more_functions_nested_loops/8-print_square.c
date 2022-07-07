#include "main.h"

/**
*print_square - print # with size rows and size columns
*Returns: # with size rows and size columns
*/
void print_square(int size)
{
int i,j;

for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
