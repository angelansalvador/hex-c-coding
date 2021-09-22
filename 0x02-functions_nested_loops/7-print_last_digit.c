#include <stdio.h>
#include "holberton.h"
/**
* _abs - prints last number of an integer
* @i: int
* Return: the value of the last digit
*/
int print_last_digit(int i)
{
	if (i<0)
	{
	i = i *- 1;
	}
	i = i%10;
	_putchar (i + 48);
	return (i);
}
