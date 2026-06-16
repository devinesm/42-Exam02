/*
• File: rev_wstr.c | Allowed: write, malloc, free

Subject

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display '\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (no spaces at beginning/end, words always separated by exactly one space).

Examples:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$

*/

#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void print_word(char *s, int i)
{
	while (s[i] && (s[i] != ' ' && s[i] != '\t'))
	{
		write(1, &s[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = ft_strlen(av[1]) - 1;

		while (i >= 0)
		{
			while ((i >= 0) && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;

			if (i < 0)
				break;

			while ((i >= 0) && (av[1][i] != ' ' && av[1][i] != '\t'))
				i--;

			print_word(av[1], i + 1);

			if (i >= 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
