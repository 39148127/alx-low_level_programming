#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer of the bytes
 * @n: the first bytes
 *@b: bytes to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;
	for(m = o; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
