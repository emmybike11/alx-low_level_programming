#include <stdio.h>
#include "main.h"
/**
 * main- Entry point 
 *
 * @ a program that prints putchar followed by a new line
 *
 * Return : 0 Always (Sucess)
 *
 */
int main(void)
{
	char ch[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
