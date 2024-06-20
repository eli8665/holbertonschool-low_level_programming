#include <stdio.h>
/**
* main - print singel digit 0 -10,
*NEW LINE.
*Return: always 0 (success)
*/
int main(void)
{
int num;
for (num = 0; num < 10 ; num++)
{
putchar(num + '0');
}
putchar('\n');
return (0);
}
