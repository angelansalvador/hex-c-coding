#include <stdio.h>
#include "holberton.h"
/**
* print_last_digit - prints last number of an integer
* @i: int
* Return: the value of the last digit
*/
int print_last_digit(int i)
{
	if (i < 0)
	{
	i = i * -1;
	i = i % 10;
        _putchar ('0' + i);
	}
	else
	{
	i = i%10;
	_putchar ('0' + i);
	}
	return (i);
}
