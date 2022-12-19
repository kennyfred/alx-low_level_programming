#include "main.h"
/**
 * _puts - write a function that a string, followed by a new line,to
 * stdout
 *
 * @str: this is the input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
