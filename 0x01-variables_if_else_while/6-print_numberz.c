#include <stdio.h>

/**
* main - This program will print all single digits
*
* Description: using the mian function
* this program prints single digit numbers
* Return: 0
*/
int main(void)
{
int n;

for (n = '0' ; n <= '9' ; n++)
{
        putchar(n);
}
putchar("\n");
return (0);
}
