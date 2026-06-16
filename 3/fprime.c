/*
• File: fprime.c | Allowed: printf, atoi

Subject
Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

Examples:
$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$

*/

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int number = atoi(av[1]);

		if (number == 1)
		{
			printf("1");
		}

		int f = 2;
		int first = 1;
		while (f <= number)
		{
			if (number % f == 0)
			{
				if (!first)
					printf("*");
				printf("%d", f);
				first = 0;
				number /= f;
			}
			else
				f++;
		}
	}
	printf("\n");
	return (0);
}
