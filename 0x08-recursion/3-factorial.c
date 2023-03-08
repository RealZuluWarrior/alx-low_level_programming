#include "main.h"
#include <string.h>
/**
 * factorial - prints the pointer string out.
 * @n: source string
 * Return: new string.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
