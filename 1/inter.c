/*
• File: inter.c | Allowed: write

Subject

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

Examples:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$

*/

#include <unistd.h>

int is_written(int c, int i, char *av)
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

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;

		while (av[1][i])
		{
			int j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					int check_written = is_written(av[1][i], i, av[1]);

					if (check_written == 0)
					{
						write(1, &av[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
