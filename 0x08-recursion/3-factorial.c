#include "main.h"

/**
 * -pow_recursion - function that returns value of x raised to power n
 *  @x: value to raise
 *  @n: power
 *
 *  Return: result of power.
 */
int _pow_recursion(int x, int n)
{
        if (n < 0)
                return (-1);
        if (n == 0)
                return (1);
        return (x * _pow_recursion(x, n - 1));
}
