/*
• File: last_word.c | Allowed: write

Subject

Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.

Example:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this ... is sparta, then again, maybe not" | cat -e
not$
$> ./last_word " " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word " lorem,ipsum " | cat -e
lorem,ipsum$

*/

#include <unistd.h>

int ft_strlen(char *av)
{
	int i = 0;
	while (av[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int len = ft_strlen(av[1]) - 1;

		while ((len >= 0) && (av[1][len] == ' ' || av[1][len] == '\t'))
			len--;

		while ((len >= 0) && (av[1][len] != ' ' && av[1][len] != '\t'))
			len--;

		len += 1;

		while (av[1][len] != ' ' && av[1][len] != '\t' && av[1][len])
		{
			write(1, &av[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
