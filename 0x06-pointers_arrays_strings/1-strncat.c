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
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (index_02 < n && src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
