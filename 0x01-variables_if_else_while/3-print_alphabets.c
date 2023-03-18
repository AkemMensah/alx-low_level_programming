#include <stdio.h>

/**
 * main - This program will output alphabelts
 *
 * Description: using the mian function
 * this program prints "lower and upper case alphabelts
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
