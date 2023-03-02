#include "main.h"
/**
 * _strncat - function with one arg
 * @dest: char type pointer
 * @src: char type pointer
 * @n: int type pointer
 * Description: using pointer as parameter to update value it points to 98
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
        int len1 = 0;
        int len2 = 0;
        int i;

        while (src[len1] != '\0')
                len1++;

        while (dest[len2] != '\0')
                len2++;

        for (i = 0; i < n; i++)
        {
                dest[len2] = src[i];
                len2++;
        }
        return (dest);
}
