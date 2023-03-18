#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed
 *
 * Description: using the mian function
 * this program prints "and is greater than 5, and is 0, and is less than 6 and not 0"
 * Return: 0
 */
int main(void)
{char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
