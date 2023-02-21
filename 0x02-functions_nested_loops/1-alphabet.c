#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function prints alphabet lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
char *al = "abcdefghijklmnopqrstuvwxyz";
while (*al)
{
_putchar(*al);
al++;
}
_putchar('\n');
return;
}
