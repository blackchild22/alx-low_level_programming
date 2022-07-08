#include "main.c"

/**
 * print_diagonal - program to print the diagonal using \
 *
 * @n: input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int n;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
