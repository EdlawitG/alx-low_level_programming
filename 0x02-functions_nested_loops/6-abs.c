#include "main.h"
#include <stdio.h>

/**
 * _abs- check the code
 * @n : integer is used
 * Return: Always 0.
 */
int _abs(int n)
{
if (n < 0)
{
n = n*(-1);
return (n);
}
else
return (n);
}
