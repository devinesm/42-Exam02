/*
• File: do_op.c | Allowed: atoi, printf, write

Subject

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

Examples:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$

*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int a = atoi(av[1]);
		int b = atoi(av[3]);

		if (av[2][0] == '+')
			printf("%d", (a + b));
		else if (av[2][0] == '-')
			printf("%d", (a - b));
		else if (av[2][0] == '*')
			printf("%d", (a * b));
		else if (av[2][0] == '/' && b != 0)
			printf("%d", (a / b));
		else if (av[2][0] == '%' && b != 0)
			printf("%d", (a % b));
	}
	write(1, "\n", 1);
	return (0);
}
