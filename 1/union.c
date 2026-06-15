/*
• File: union.c | Allowed: write

Subject

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.
The display will be in the order characters appear in the command line, and
will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

Example:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$

*/

#include <unistd.h>

int is_written(int c, char *av, int i)
{
	int j = 0;
	while (j < i)
	{
		if (av[j] == c)
			return (1);
		j++;
	}
	return (0);
}

int ft_strlen(char *av)
{
	int i = 0;
	while (av[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		while (av[1][i])
		{
			int check_written = is_written(av[1][i], av[1], i);
			if (check_written == 0)
				write(1, &av[1][i], 1);
			i++;
		}

		int j = 0;
		int strlen = ft_strlen(av[1]);
		while (av[2][j])
		{
			int check_written1 = is_written(av[2][j], av[1], strlen);
			int check_written2 = is_written(av[2][j], av[2], j);
			if (check_written1 == 0 && check_written2 == 0)
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
