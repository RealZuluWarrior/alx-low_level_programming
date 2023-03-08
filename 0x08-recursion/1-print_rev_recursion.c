#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints the pointer string out.
 * @s: source string
 * Return: new string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
