#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Print if the number is positive, zero or negative
*
*Description: using the main function 
*This program prints "Programming is positivem zero or negative"
*Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0 )
{
	printf("%i is negative\n", n);
}
return (0);
}
