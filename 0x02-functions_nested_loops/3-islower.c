#include "main.h"
/**
 * _islower - tests if is lower
 * @c: character to test
 * Return: 1 if its lower, 0 if its not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
