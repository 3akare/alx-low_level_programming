#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * @void: void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				printf("FizzBuzz");
				putchar(32);
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
				putchar(32);
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
				putchar(32);
			}
			else
			{
				printf("%d", i);
				putchar(32);
			}
		}
		else
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}
