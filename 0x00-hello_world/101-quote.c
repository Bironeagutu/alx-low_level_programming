#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - main function
 * Return: 1 on success
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - "

		"Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));

	return (1);
}

