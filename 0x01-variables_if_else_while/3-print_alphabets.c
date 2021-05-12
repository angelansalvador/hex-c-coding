#include <stdio.h>

/**
* main - printing the lowercase alfabet
* Return: Prints abcdefghjk...z
*/
int main(void)
{
	int ascii_code;

	for (ascii_code = 97; ascii_code < 123; ascii_code++)
	{
	putchar(ascii_code);
	}

	for (ascii_code = 65; ascii_code < 91; ascii_code++)
	{
	putchar(ascii_code);
	}

	putchar('\n');

	return (0);
}
