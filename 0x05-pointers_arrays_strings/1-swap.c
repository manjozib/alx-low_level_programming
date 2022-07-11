#include "main.h"
/**
*swap - swap 2 variables a and b
*@a: a pointer which will take value of b
*@b: a pointer which will take value of a
*@temp: temporary variable
*Returns : nothin
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a =  *b;
*b = temp;
}
