#include "main.h"

/**
 * print_sign - check the code.
 * @n : integer is used
 * Return: Always 0.
 */
int print_sign (int n)
{
    if (n > 0)
    {
        return (1);
        _putchar('+');
        _putchar(1);
    }
    else if (n < 0)
    {
        return (-1);
        _putchar('-');
        _putchar(1);
    }
    else
    {
        return (0);
        _putchar('0');
        _putchar(0);
    }
}
