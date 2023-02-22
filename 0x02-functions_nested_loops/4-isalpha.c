#include "main.h"

/**
* _isalpha :- Check if  characters an alphabets
*
* @c: the character to  checked on the  function
*
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

