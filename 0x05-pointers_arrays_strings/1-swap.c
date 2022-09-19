#include "main.h"
#include <stdio.h>
/**
 *
 * swap_int - swaps the value of the two integers
 *
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	int lil = *b;
	*b = temp;
	*a = lil;
}
