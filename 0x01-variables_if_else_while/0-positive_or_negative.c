#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'Positive anything is better than negative'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		if (n == 0)
			printf("Zero");
		else
			printf("Negative");
	}
		else
			printf("Positive");
	return (0);
}
