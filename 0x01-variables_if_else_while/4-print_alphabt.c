#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Program to print alphabet in small letters without e and q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for(i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
