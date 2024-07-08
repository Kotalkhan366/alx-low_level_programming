#include "main.h"
#include <stdio.h>
/**
 * main - A program that prints the largest prime factor of a number 612852475143
 *
 * Return: Always 0 Success.
 */

int main(void)
{
long long number = 612852475143;
long long result = findLargestPrimeFactor(number);
printf("%lld\n", result);
return (0);
}
