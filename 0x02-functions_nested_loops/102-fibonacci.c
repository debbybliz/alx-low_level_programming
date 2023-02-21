#include "main.h"

/**
 * main - computes and prints the sum of all the multiples of 3 0r 5 below 1024
 * Return: 0 if successful
 */

int main(void)
{
	int sum, i;

	for (i = 1023, sum = 0; i; i--)
		if (!(i % 3) || !(i % 5))
		sum += i;
printf("%d\n", sum);

return (0);
}
[11:47 PM, 2/21/2023] 🎼Shooga👨‍💻 ALX: 13
[11:48 PM, 2/21/2023] 🎼Shooga👨‍💻 ALX: #include <stdio.h>
#include "main.h"

/**
 * main - prints sum of even valued fibonacci numbers under 4,000,000
 * Return: 0 if successful
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
