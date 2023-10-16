#include "main.h"

/**
 * _strlen - find the legth of the string
 * @s: string to be counted
 * Return: legth of the string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
