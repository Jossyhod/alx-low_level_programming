#include "main.h"

/**
 * -pow_recursion - function that returns the factorial of a given number
 *  @n: input number
 *  Return: result of power.
 */
int _pow_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
