#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 *
 * @x: base
 *
 * @y: index or power
 *
 * Return: result of x raised to  power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
