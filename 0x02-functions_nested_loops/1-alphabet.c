#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Alphabet lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet()
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return 0;
}
