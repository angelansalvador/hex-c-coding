#include <stdio.h>
/**
* _isalpha - test if char is lowercase or uppercase
* @c: char
* Return: 1 for alpha or 0 for otherwise
*/
int _isalpha(char c)
{

	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
