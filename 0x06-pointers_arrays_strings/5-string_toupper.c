#include "main.h"
#include <string.h>
/**
 * string_toupper - Changes letters toUpper Case
 * @x: The string to be changed.
 *
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] -= 32;

		i++;
	}

	return (i)
}
