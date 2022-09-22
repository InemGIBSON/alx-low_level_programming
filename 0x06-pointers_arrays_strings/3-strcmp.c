#include "main.h"
#include <string.h>
/**
*_strcmp - Compares pointers to two strings.
*@s1: A pointer to the first string to be com
*@s2: A pointer to the second string to be com
*
 *      * Return: If str1 < str2the first unmat
 *	If str1 == str2, 0.
 *	If str1 > str2,rst unmatched
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


