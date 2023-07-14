#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Intializes random number generator */
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* your code goes here */
    printf("%d ", n);
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");
    return (0);
}
