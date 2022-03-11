#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * print two digit
 * Return: 0
 */
int main(void)
{
int num, num2 = 0;
while (num2 < 10)
{
num = 0;
while (num < 10)
{
if (num2 != num && num2 < num)
{
putchar('0' + num2);
putchar('0' + num);
if (num + num2 != 17)
{
putchar(',');
putchar(' ');
}
}
num++;
}
num2++;
}
putchar('\n');
return (0);
}
