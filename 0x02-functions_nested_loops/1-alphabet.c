#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - make the alphabet
 * return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
