#include "main.h"

/**
 *  _isupper - program to check if input is upper caseor not
 *
 *  @c: input
 *
 *   Return: 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c > 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
