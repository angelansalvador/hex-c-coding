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
		if (ascii_code == 101 || ascii_code == 113)
		{
		}
		else
		{
		putchar(ascii_code);
		}
	}
	putchar('\n');
	return (0);
}
