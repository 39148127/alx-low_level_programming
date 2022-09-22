#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 *
 *  @src: source
 *
 *  Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
