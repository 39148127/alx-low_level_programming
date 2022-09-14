#include "main.h"
/**
 *main(void) - prints 10 characters
 *
 *it returns 0
 */
int main(void)
{
	int w;
	w = 0;
	char x;
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
			
