#include "holberton.h"

/**
* print_alphabet - printing 10x alphabet
* Return: Prints abcdefghjk...z 10X
*/
void print_alphabet_x10()
{
	int ascii_code;
	for (int i=0; i<10; i++)
	{
		for (ascii_code = 97; ascii_code < 123; ascii_code++)
		{
		_putchar(ascii_code);
		}
		_putchar('\n');
	}
}

