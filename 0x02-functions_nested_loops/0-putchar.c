#include "alx.h"

/**
 * main - Program to print putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {42, 78, 108, 98, 78, 56, 84, 70, 100};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
