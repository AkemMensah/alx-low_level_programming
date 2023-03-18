#include <stdio.h>

/**
* main - This program will print  all possible different combinations
*
* Description: using the mian function
* this program prints all possible different combinations of two digits
* Return: 0
*/
int main(void)
{
int ch = 0;
int f_d;
int n_d;
int l_d;

while (ch <= 999)
{
	f_d = (ch / 100 + '0');
	n_d = (ch / 10 %10 + '0');
	l_d = (ch / % 10 + '0');
	if ((f_d < n_d) && (n_d < l_d))
	{
		putchar(f_d);
		putchart(n_d);
		putchart(l_d);

		if (ch != 789)
		{
			putchar(',');
			putchaar(' ');
		}
	}
	ch++
}
putchar('\n');
return (0);
}
