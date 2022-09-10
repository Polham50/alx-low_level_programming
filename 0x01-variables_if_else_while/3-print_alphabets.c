#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	clrscr();
	printf("Print all uppercase letters followed :\n");
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar ('\n');
	putchar ('\n');
	getch();
	return (0);
}
