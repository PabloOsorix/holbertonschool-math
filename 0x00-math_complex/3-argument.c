#include "holberton.h"
#include <math.h>

/**
 * argument - returns the argument of a given complex number.
 * @c: Struct type complex
 * Return: argument of number complex.
 */
double argument(complex c)
{
	double argument;

	argument = atan((c.im / c.re));
	return (argument);
}
