#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "44370171";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_map[j] != '\0'; j++)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}
	return (str);
}

