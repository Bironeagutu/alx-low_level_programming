#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - Capitalizes words in a string based on specified separators.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		capitalize_next = 0;
		if (is_separator(str[i]))
		{
			capitalize_next = 1;
		}
	}
	return (str);
}

