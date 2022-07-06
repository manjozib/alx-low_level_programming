#include "main.h"
/**
* print_alphabet_x10 - print alphabet
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int alph;
int counter;
counter = 0;
while (counter < 10)
{
for (alph = 'a' ; alph <= 'z'; alph++)
{
_putchar(alph);
}
counter++;
_putchar('\n');
}
}
