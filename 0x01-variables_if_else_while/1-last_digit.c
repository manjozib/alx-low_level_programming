#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
*main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        printf("Last digit of %d", n);

        if (n == 0)
        {
                printf("is and is 0\n");
        }
        else if (n < 6)
        {
                printf("is and is less than 6 and not 0\n");
        }
        else
        {
                printf("and is greater than 5\n");
        }
        return (0);
}
