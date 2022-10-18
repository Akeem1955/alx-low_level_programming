#include "main.h"
/**
 * _isalpha - check for character
 *@c: parameter to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	if (c >= 48 && c <= 122)
	{
		return (1);
	}
	return (0);
}
