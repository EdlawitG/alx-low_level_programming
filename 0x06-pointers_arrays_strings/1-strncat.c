#include "main.h"
/**
 * _strncat - check the code
 * @dest:pointer
 * @src:pointer
 * @n:integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
      int c;

    for (c = 0; dest[c] != '\0'; c++);

        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
            dest[c + i] = src[i];
        }
        dest[c + i] = '\0';
    return (dest);
}
