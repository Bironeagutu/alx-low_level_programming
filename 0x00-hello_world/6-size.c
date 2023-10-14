#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */

int main(void)
{
	printf("the size of char type is %lu byte \ns", sizeof(char));
	printf("the size of int type is %lu bytes \n", sizeof(int));
	printf("the size of short type is %lu bytes \n", sizeof(short));
	printf("the size of long type is %lu bytes \n", sizeof(long));
	printf("the size of long long type is %lu bytes \n", sizeof(long long));
	printf("the size of float type is %lu bytes \n", sizeof(float));
	printf("the size of double is %lu bytes \n", sizeof(double));
	printf("the size of long double is %lu bytes \n", sizeof(long double));
	printf("the size of pointer is %lu bytes \n", sizeof(void));

	return (0);
}
