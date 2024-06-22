#include <stdio.h>
/**
 * main - A program that prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main()
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <=9; j++)
{
for (k = j + 1; k <=9; K++)
{
printf("%d%d%d\n", i, j, k);
}
}
}
return 0;
}
