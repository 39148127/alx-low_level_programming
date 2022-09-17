#include "main.h"
/**
 *
 * int _isupper - check for uppercase characters
 *
 * @c - character to check
 *
 * return: 0 0r 1
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
