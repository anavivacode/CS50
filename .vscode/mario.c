#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		n = get_int("Height: ");
	} while (n < 1 || n > 8);

	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
		{
			if (a + b >= n - 1)
				printf("#");

			else
				printf(" ");
		}
		printf("#\n");
	}
}