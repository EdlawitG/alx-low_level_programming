#include "main.h"

/**
 * print_numbers - print numbers
 * Return :0
 */
void print_numbers(void)
{
	int n;

	while (n <= 0)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
