#include "main.h"
/**
 * main - A program that prints a triangle
 *
 * Return: Always 0 Success
 */

int main(void)
{
int height = 5;
for (int i = 1; i <= height; ++i)
{
for (int j = 1; j <= i; ++j)
{
printf("#");
}
printf("\n");
}
return (0);
}
