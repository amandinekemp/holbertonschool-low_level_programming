#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{

			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
