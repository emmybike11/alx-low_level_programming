#include "main.h"
/**
 * print_alphabet - prints the alphabet 10 times in lowercase
 * return: void
 */
void print_alphabet(void)
{
	int printtimes = 0;

	char alphy;

	while (printtimes < 10)
	{
		alphy = 'a';
		while (alphy <= 'z')
		{
			_putchar(alphy);
			alphy++;
		}
		_putchar('\n');
		printtimes++;
	}
}
