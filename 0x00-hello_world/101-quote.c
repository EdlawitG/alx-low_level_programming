#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Do not use printf and puts
 *
 * Return: 1
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	write(2, ch, sizeof(ch));
	return (1);
}
