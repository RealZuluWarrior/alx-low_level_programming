#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char *a = "abcdefghijklmnopqrstuvwxyz";
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
