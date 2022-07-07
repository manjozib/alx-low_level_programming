#include "main.h"
/**
*print_line - prints n lines
*Return: number n lines(_) or end line if n=0
*/
void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 1; i <= n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
