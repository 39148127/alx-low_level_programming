#include "main.h"
/**
 *main(void) - prints 10 characters
 *
 *it returns 0
 */
void print_alphabet_x10(void)
{
	int w;
	char x;
	w = 0;
	while(w <= 9)
	{
		for(x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		w++;
	        _putchar('\n');
	}
}
			
