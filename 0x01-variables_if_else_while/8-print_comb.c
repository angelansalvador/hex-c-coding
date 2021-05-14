#include <stdio.h>

/**
* main - printing number with , and space
* Return: Prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*/
int main(void)
{
	int ascii_code;

	for (ascii_code = 48; ascii_code < 58; ascii_code++)
	{
	putchar(ascii_code);

		if (ascii_code == 57)
		{
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
