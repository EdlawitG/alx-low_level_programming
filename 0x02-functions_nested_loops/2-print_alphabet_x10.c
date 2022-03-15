#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char let;
	int num;

	for (num = 1; num <=10; num++)
	{
		for (let = 'a'; let <= 'z' ; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
int main(void)
{
    print_alphabet_x10();
    return (0);
}
