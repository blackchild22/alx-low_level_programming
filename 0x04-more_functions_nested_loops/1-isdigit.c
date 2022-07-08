include "main.h"

/**
 * _isdigit - is a prgramme to check for a digit.
 *
 * @c: input
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
