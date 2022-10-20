#include "main.h"
/**
 * _isupper - checks for uppeercase character
 * @c:charcater to check for uppercase
 * Return:1 or 0
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
}
