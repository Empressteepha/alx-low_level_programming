#include "main.h"

/**
 * _pow_recursion - returns the value of of a
 * number (say x) raised to the power of
 * another (say y)
 * @x: number tio be raised
 * @y: the power to raise x to
 * Return: resulf of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
