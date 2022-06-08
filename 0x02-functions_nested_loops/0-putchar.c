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
int (void)
{
	char ch[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
