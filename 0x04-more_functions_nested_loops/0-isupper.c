#include "main.h"

/**
 * _isupper - program to check if input is uppercase or not 
 *
 * @c: input
 * 
 * Return: 0 or 1 
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
