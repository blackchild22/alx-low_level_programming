#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swap the value of two integers
 *
 * @a: input 1
 *
 * @b: input 2
 */
void swat_int(int *a, int *b)
{
	int tempa, tempb;

	tempa = *b;
	tempb = *a;
	*b = tempb;
	*a = tempa;
}
