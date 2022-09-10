#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	printf("Print all uppercase letters followed :\n");
for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
putchar ('\n');
for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
putchar ('\n');
	return (0);
}
