#include "main.h"
/**
 *main(void) - prints 10 characters
 *
 *it returns 0
 */
int main(void)
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
			
