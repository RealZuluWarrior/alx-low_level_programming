#include <stdio.h>
#include "main.h"
/**
 * print_alphabetx10 - a function print alpha 10x
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char *a = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (i < 10)
	{
		while (*a)
		{
		_putchar(*a);
		a++;
		}
		_putchar('\n');
		i++;
	}
	return;
}
