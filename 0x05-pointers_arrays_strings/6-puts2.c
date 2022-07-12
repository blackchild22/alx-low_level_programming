#include "main.h"
#include <string.h>

/**
 * puts2 - prints odd number difits of a number
 *
 * @str: string input
 *
 * Return: voi
 */
void puts2(char *str)
{
	int i = 0;
	int j = strlen(str);

	while (i < j)
	{
		_putchar(str[i]);
		i = i +2;
	}
	_putchar('\n');
}
