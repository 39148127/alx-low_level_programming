#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main - whether the number is positive or negative
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("is positive\n", n);
}
else if (n == 0)
{
printf("is zero\n", n);
}
else
printf("is negative\n", n);
return (0);
}
