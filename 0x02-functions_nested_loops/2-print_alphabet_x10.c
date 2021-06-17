#include "holberton.h"

/**
* print_alphabet_x10 - printing 10x alphabet
* Return: Prints abcdefghjk...z 10X
*/
void print_alphabet_x10(void)
{
	int ascii_code;
	int i = 0;

	do{
		for (ascii_code = 97; ascii_code < 123; ascii_code++)
		{
		_putchar(ascii_code);
		}
		_putchar('\n');
		i++;
	} while (i < 10);
}

