#include <unistd.h>
/**
 * main - Entry Point
 * @c - print character
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
