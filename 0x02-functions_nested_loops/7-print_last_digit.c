#include <stdio.h>
#include "holberton.h"
/**
* print_last_digit - prints last number of an integer
* @i: int
* Return: the value of the last digit
*/
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
	i = i * -1;
	_putchar ('0' + i);
	}
	else
	{
	_putchar ('0' + i);
	}
	return (i);
}
