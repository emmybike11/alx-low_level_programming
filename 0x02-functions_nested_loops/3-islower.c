#include "main.h"
/**
 * _islower - to check if a letter is lowercase
 * @c: Argument
 * Return: 0 or 1
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
