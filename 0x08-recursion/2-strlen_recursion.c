#include "main.h"

/**
 * _strlen_recursion - outputs length of strings
 * @s: the string to be measyred
 * return: length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
