#include <stdio.h>
/**
* _islower - test if char is lowercase
* Return: 0 for lowercase or 1 for high
*/
int _islower(char c){

	if (c > 96 && c < 123)
       	{
		return 1;
	}
	else
	{
		return 0;
	}
}
