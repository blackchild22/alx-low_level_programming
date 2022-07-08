#include "main.h"

/**
 * print_triangle - a program to draw a triangle using #
 *
 * @size: size of triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, m, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (m = 1; m <= (size - 1); m++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
