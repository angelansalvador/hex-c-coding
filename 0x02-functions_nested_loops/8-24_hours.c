#include <stdio.h>
#include <time.h>

/**
* jack_bauer - hours and minutes of the day
* Return: the value hours and minutes of the day
*/
void jack_bauer(void)
{
	int h, m;
	for (h=0; h<24; h++){
		for (m=0; m<60; m++){
		printf("%02d", h);
		printf(":%02d\n", m);
		}
	}
}
