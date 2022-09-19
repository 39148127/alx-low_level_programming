#include <main.h>
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
	*a = *b;
	*a = temp;
}
