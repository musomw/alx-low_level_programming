#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %ld byte(s)\n", sizeof(char));
    printf("Size of int: %ld byte(s)\n", sizeof(int));
    printf("Size of long: %ld byte(s)\n", sizeof(long));
    printf("Size of long long: %ld byte(s)\n", sizeof(long long));
    printf("Size of float: %ld byte(s)\n", sizeof(float));
    printf("Size of double: %ld byte(s)\n", sizeof(double));
    printf("Size of long double: %ld byte(s)\n", sizeof(long double));
    return (0);
}
