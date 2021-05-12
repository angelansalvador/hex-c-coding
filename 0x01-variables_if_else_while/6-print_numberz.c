#include <stdio.h>

/**
* main - printing the number 0 to 9 
* Return: Prints 0 to 9
*/
int main(void)
{
	int ascii_code;
			
	for (ascii_code = 48; ascii_code < 58; ascii_code++)
	{
	putchar(ascii_code);
	}
	putchar('\n');

	return (0);
}
