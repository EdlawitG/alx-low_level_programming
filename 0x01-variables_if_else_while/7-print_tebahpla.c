#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * reverse
 * Return: 0
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
