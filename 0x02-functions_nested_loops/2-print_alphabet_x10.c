#include "main.h"

/**
 * print_alphabeth_x10 -Prints alphabet in lowercase 10 times.
 * followed by a new line
 */
void print_alphabeth_x10(void)
{
	char ch;
	int i;
	
	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
