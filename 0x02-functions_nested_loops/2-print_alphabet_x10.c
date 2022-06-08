#include "main.h"
/**
 * print_alphabet - prints the alphabet 10 times in lowercase
 * return:Alphabets
 */
void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
/**
 * print_alphabet_x10 - function to print all alphabets ten times
 * Return: Success
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
