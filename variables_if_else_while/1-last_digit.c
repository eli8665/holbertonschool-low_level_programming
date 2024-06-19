#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * n is positive, zero, or negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int Last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
Last_digit = n % 10;
if (Last_digit > 5)
{
printf("greater than 5\n");
}
else if (Last_digit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
