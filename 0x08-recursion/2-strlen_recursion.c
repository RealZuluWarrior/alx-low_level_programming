#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - prints the pointer string out.
 * @s: source string
 * Return: new string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
