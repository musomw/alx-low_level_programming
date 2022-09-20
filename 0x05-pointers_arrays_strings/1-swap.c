#include "main.h"

/**
*swap_int - function swaps two integers' values
*@a: is the first integer
*@b: is the second integer
*Return : returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
