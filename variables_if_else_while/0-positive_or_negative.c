#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
	/**
 * main -  n is positive or negative.
 * Cette fonction affiche un message a l'ecran en utilisant puts.
 * Return: Toujours 0 (Succes)
 */
{
	int n;
		srand(time(NULL));
		n = rand();
		printf("the number %d is", n);
	if (n < 0)
	{
	printf("is negative,\n");
	}
	else if (n == 0)
	{
	printf("is zero,\n");
	}
	else
	{
	printf("is positive.\n");
	}
	return 0;
}
