#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * @0 - Return value
 * Return: Always 0
 *
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
