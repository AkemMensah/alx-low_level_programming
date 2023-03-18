#include <stdio.h>

/**
* main - This program will print possible combinations
*
* Description: using the mian function
* this program prints possible combintions of single digits
* Return: 0
*/
int main(void)
{
int ch;

for (ch = 48 ; ch <= 57 ; ch++)
{
	putchar(ch);
	if (ch !=57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
