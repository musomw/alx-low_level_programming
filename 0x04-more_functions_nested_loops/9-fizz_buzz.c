#include <stdio.h>
#include "main.h"

/**
*main - program that prints either number
*or fizz or buzz or FizzBuzz
*
*
*Return: returns 0 
*/

int main(void)
{
    int num = 1;

    while (num++ < 100)
    {
        if ((num % 3 == 0) && (num % 5 == 0))
        {
            printf("FizzBuzz ");
        }
        else if (h % 3 == 0)
            printf("Fizz");
        else
            printf("%d ", h);
    h++;           
    }
return (0);    
}
