#include "main.h"
/**
*print_line - prints n blanks (space lines) and then append \$ at end
*Return: number n  blank lines if n > 0 otherwise $
*/
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
for (j = 1; j <= n; j++)
{
for (i = 1; i <= j ; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar(' ');
}
_putchar('\n');
}
