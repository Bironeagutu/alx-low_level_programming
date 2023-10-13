#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/*
 * main function generates any positive ornegative number
 * return: always zero
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d",n);
	
	return (0);
}
