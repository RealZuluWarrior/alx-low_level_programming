#include "main.h"
#include <string.h>
/**
 * _strcat -function with two arg
 * @dest: char type pointer
 * @src: char type pointer
 * Description: used to concat 2 strings together
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

