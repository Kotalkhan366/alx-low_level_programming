#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main()
{
int tens_digit1, ones_digit1, tens_digit2, ones_digit2;
for (tens_digit1 = 0; tens_digit1 <= 9; tens_digit1++)
{
for (ones_digit1 = 0; ones_digit1 <= 9; ones_digit+++)
{
for (tens_digit2 = 0; tens_digit2 <=9; tensdigit2++)
{
for (ones_digit2 = 0; ones_digit2 <=9; onesdigit2++)
{
printf("%d%d %d%d\n", tens_digit1, ones_digit1, tens_digit2, ones_digit2);
}
}
}
}
return 0;
}
