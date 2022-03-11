#include <stdio.h>
/**
 * main - Entry point
 * print num
 * Return: 0
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar(48 + num);
num++;
}
putchar('\n');
return (0);
}
