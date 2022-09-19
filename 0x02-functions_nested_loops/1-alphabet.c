#include "main.h"
/**
 * Writes a function that prints the alphabet
 * function print_alphabet - function declaration
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
	char i;

	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
