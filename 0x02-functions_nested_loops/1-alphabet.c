#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet()
{
	char let;

	for (let = 'a'; let <= 'z' ; let++) 
	{
		_putchar(let);
	}
	_putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
