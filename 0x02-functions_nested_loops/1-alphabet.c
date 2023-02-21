#include <stdio.h>
#include "main.h"
/*
 *main - print lower case
 *
 *
 */
void print_alphabet (void)
{
	char *al ="abcdefghijklmnopqrstuvwxyz";	
     while(*al)
     {
	     _putchar(*al);
	     al++;
     }
     _putchar('\n');
}
