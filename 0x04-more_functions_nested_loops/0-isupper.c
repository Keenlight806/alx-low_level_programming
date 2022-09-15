#include "main.h" 
#include <ctype.h>
/**
 * _isuper - Entry mode
 * @c: an integer
 * Return: Always 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
