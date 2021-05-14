#include <stdio.h>

/**
* main - printing reverse lowercase alfabet 
* Return: Prints zyxwvu....a
*/
int main(void)
{
	int ascii_code;

	for (ascii_code = 122; ascii_code > 96; ascii_code--)
	{
	putchar(ascii_code);
	}
	putchar('\n');
	return (0);
}
