#include "main.h"
/**
 * main - Entry point
 *
 * prints alphabets in lower case, use putchar only twice
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
