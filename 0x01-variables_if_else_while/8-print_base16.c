#include <stdio.h>

/**
* main - This program will print base 16 numbers
*
* Description: using the mian function
* this program prints base sixteen
* Return: 0
*/
int main(void)
{
char ch;

for (ch = '0' ; ch <  '9' ; ch++)
{
        putchar(ch);
}
for (ch = 'a' ch <= 'f' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
