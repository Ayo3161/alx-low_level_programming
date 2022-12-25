#include <stdio.h>

/**
 * print_sign - print the sign of a numbe
 * @n: the number to check sign
 * 
 * Return: Return 1 and print + if n is greater than 0, return 0 if 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
}
