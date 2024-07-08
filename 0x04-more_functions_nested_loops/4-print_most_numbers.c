#include "main.h"

/**
 * main - A function that prints numbers 0 to 9 except 2 and 4
 *
 * Return: 1 for Success.
 */

int main(void)
{
for (int i = 0; i < 10; ++i)
{
if (i != 2 && i != 4)
{
printf("%d\n", i);
}
}
return (0);
}
