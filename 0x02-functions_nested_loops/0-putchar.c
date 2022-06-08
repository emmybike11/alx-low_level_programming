#include <stdio.h>
#include "main.h"
/**
 * main - Entry point where the program starts execution
 *
 * @ a program that prints putchar followed by a new line
 *
 * Return : 0 Always
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
