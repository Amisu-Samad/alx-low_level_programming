#include "main.h"
/**
 * _isupper - checks for uppercase
 *@c: the function parameter
 * RetuRN: 0 OR 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
