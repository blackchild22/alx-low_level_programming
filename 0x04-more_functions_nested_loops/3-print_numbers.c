#include "main.h"

/**
 * print_numbers - a program to print tge digit 1 to 9 followed by new line.
 *
 * Return: void.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
