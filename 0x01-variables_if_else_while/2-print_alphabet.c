#include <stdio.h>


/**
 * main - this program will prints the alphabet in lowercase
 *
 * Description: using the mian function
 * this program prints "prints the alphabet in lowercase"
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
