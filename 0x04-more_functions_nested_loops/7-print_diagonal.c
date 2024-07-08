#include "main.h"

/**
 * main - A program that drawws a diagonal line on the terminal
 *
 * Return: Always 0 Success.
 */

int main(void)
{
int lineLength = 10;
for (int i = 0; i < lineLength; ++i)
{
for (int j = 0; j < i; ++j)
{
printf(" ");
}
printf("*\n");
}
return (0)'
}
