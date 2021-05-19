#include "holberton.h"

/**
* main - printing the lowercase alfabet
* Return: Prints abcdefghjk...z
*/
void print_alphabet(void)
{
	int ascii_code;
	for (ascii_code = 97; ascii_code < 123; ascii_code++)
	{
	_putchar(ascii_code);
	}
	_putchar('\n');
}
