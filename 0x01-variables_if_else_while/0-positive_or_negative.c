#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main: main function
 * return: sometimes zero
 */
int main(void)
{
	int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number %d, ", n);
    
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
