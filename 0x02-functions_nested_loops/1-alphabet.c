#include <stdio.h>
#include "main.h"
/*
 *main - print lower case
 *
 *
 */
int main(void)
{
	static char *alpha ="abcdefghijklmnopqrstuvwxyz";
	print_alphabet();
	return (0);
}
void print_alphabet (void)
{
     while(*alpha)
     {
	     _putchar(tolower(*alpha));
	     alpha++;
     }
}
