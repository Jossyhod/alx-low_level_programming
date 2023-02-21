#include "main.h"

/**
 * _putchar - Program to print putchar as a message.
 * @c: The character to print
 *
 * Return: Always 1 (Success)
 * on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
