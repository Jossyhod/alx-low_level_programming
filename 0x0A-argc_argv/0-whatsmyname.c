#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: arrays that contains the program command line arguments.
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
