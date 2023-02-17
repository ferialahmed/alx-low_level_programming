#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	/*for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}*/

	putchar('\n');
	return (0);
}

