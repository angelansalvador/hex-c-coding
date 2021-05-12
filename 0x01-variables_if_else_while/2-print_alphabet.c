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
	return 0;
}
