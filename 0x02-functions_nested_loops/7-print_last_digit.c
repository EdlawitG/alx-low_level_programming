#include "main.h"

/**
 * print_last_digit - check the code
 * @n : integer is used
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x;

if (n > 0)
{
x = n % 10;
}
else
{
x = -1 * (n % 10);
}
	_putchar(x + '0');
	return (x);
}
