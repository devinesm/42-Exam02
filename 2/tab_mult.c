/*
• File: tab_mult.c | Allowed: write

Subject

Write a program that displays a number's multiplication table.
The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.
If there are no parameters, the program displays \n.

Examples:
$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
[...]
9 x 9 = 81
$>./tab_mult | cat -e
$

*/

#include <unistd.h>
void ft_putnbr(int number)
{
	if (number >= 10) ft_putnbr(number / 10);
	char c = number % 10 + '0';
	write(1, &c, 1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 1;
		int limit = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(limit);
			write(1, " = ", 3);
			ft_putnbr(i * limit);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
