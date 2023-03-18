#include <stdio.h>

/**
* main - This program will all alphabelts
*
* Description: using the mian function
* this program prints except e and q
* Return: 0
*/
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
