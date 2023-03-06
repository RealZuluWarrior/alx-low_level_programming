#include "main.h"
/**
 * _strstr - prints consecutive characters of s1 in s2.
 * @haystack: string
 * @needle: find string
 *
 * Return: string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && check_more(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * check_more - define if the string b is inside a.
 * @a: source string
 * @b: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */
int check_more(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}

	if (*b == '\0')
		return (1);
	else
		return (0);
}
