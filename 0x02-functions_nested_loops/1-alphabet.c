#include "main.h"

/**
 * print_alphabet - check the code
 * prints a to z
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
