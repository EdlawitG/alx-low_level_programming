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
for (mult = 0; mult < 10; mult++)
{
pro = num * mult;
if (mult == 0)
{
_putchar(pro + '0');
}
else if (pro >= 10)
{
_putchar(' ');
_putchar(pro / 10 + '0');
_putchar(pro % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(pro + '0');
}

if (mult != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
