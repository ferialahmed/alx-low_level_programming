#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e'.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' || letter != 'Q')
			putchar(letter);
	}

	putchar('\n');
	return (0);
}
