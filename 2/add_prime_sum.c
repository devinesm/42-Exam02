/*
• File: add_prime_sum.c | Allowed: write, exit

Subject

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Examples:
$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$

*/

#include <unistd.h>

int ft_atoi(char *av)
{
	int i = 0;
	int result = 0;
	int signal = 1;

	if (av[i] == '-' || av[i] == '+')
	{
		if (av[i] == '-')
			signal = -1;
		i++;
	}

	while (av[i] >= '0' && av[i] <= '9')
	{
		result = result * 10 + (av[i] - '0');
		i++;
	}

	return (result * signal);
}

int is_prime(int i)
{
	if (i <= 1)
		return (0);

	int j = 2;
	while (j * j <= i)
	{
		if (i % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int add_prime_sum(int number)
{
	int i = 2;
	int result = 0;

	while (i <= number)
	{
		if (is_prime(i) == 1)
			result += i;
		i++;
	}
	return (result);
}

void ft_putnbr(int value)
{
	if (value >= 10) ft_putnbr(value / 10);
	char c = (value % 10) + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int number = ft_atoi(av[1]);

		if (number > 0)
		{
			int value = add_prime_sum(number);
			ft_putnbr(value);
		}
		else
			write(1, "0", 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
