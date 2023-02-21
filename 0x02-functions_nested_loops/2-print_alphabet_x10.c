#include "main.h"

/**
 * print_alphabeth_x10 - program to print alphabet 10 times.
 *
 * return: Always 0 (Success)
 */
void print_alphabeth_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
	_putchar('\n');
	}
}
