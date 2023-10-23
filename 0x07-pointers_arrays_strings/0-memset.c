#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; ++i)
    {
        s[i] = b;
    }
    return s;
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char array1[20];
    char array2[20];
    unsigned int i;

    /* Filling array1 with 0x00 using _memset function */
    _memset(array1, 0x00, sizeof(array1));

    /* Printing array1 */
    for (i = 0; i < sizeof(array1); ++i)
    {
        printf("0x%02x ", array1[i]);
        if ((i + 1) % 10 == 0) /* Newline after every 10 elements */
            printf("\n");
    }
    printf("\n-------------------------------------------------\n");

    /* Filling array2 with 0x01 using _memset function */
    _memset(array2, 0x01, sizeof(array2));

    /* Printing array2 */
    for (i = 0; i < sizeof(array2); ++i)
    {
        printf("0x%02x ", array2[i]);
        if ((i + 1) % 10 == 0) /* Newline after every 10 elements */
            printf("\n");
    }
    printf("\n");

    return 0;
}

