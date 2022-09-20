#include <stdio.h>
#include "main.h"

/**
*_puts - will print a string
*@str: string to print
*
*Description: prints a string
*On sucess: returns on error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	putchar(*(str + i));
	i++;
	}
	putchar(10);
}
