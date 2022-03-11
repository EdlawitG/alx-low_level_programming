#include <stdio.h>
/**
 * main - Entry point
 * print lower and uppercase
 * Return: 0
 */
int main(void)
{
char lower = 'a';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
lower = 'A';
while (lower <= 'Z')
{
putchar(lower);
lower++;
}
putchar('\n');
return (0);
}
