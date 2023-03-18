#include <stdio.h>

/**
* main - This program will alphabets in reverse
*
* Description: using the mian function
* this program prints lower case alphabets in reverse
* Return: 0
*/
int main(void)
{
char ch;

for (ch  = 'z' ; ch <= 'a' ; ch--)
{
        putchar(ch);
}
printf('\n');
return (0);
}
