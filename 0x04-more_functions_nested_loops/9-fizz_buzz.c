#include "main.h"
/**
 * main - A program that prints numbers from 1 to 100
 *
 * Return: Alawys 0 Success.
 */

int main(void)
{
for (int i = 1; i <= 100; ++i)
{
if (i % 3 == 0 && i % 5 == 0)
{
print("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}
return (0);
}
