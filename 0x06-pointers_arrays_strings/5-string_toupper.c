#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes letters toUpper Case
 * @str: The string to be changed.
 *
 * Return: A pointer that will changeit
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str)
}

