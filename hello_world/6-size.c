#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	/* Print the sizes of various data types */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	/* Return 0 to indicate successful completion */
	return (0);
}
