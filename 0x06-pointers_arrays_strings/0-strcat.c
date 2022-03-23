#include "main.h"

/**
 * _strcat - check the code
 * @dest :pointer
 * @src:pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
    int c;

    for (c = 0; dest[c] != '\0'; c++);

        int i;

        for (i = 0; src[i] != '\0'; i++)
        {
            dest[c] = src[i];
            c++;
        }
        dest[c] = '\0';
    return (dest);
}
