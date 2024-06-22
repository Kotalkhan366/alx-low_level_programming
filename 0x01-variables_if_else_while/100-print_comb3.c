#include <stdio.h>
/**
 * main - A program that prints all possible different combinations of two digits.
 *
 * Return: Always 0 ((Success)
 */
int main()
{
int tens_digit, ones_digit;
for(tens_digit = 0; tens_digit <=9; tens_digit++)
{
for (ones_digit = 0; ones_digit <=9; ones_digit++)
{
printf("%d%d ", ten_digit, ones_digit);
}
}
printf("\n");
return 0;
}				
