#include "main.h"
/**
 * _strcmp - check the code
 * @s1:pointer
 * @s2:pointer
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
