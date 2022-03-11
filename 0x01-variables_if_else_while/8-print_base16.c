#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * base 16
 * Return: 0
 */
int main(void)
{
char d = '0';
while (d <= '9')
{
putchar(d);
d++;
}
d = 'a';
while (d <= 'f')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
