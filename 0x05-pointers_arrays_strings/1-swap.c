#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values o two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
