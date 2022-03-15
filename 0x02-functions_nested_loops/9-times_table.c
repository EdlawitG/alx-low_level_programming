#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int num;
	int mult;
	int pro;

	for (num = 0; num < 10; num++)
	{
		for (mult =0; mult < 10; mult++)
		{
			pro = num * mult;
			_putchar(pro);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
