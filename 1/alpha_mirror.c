/*
• File: alpha_mirror.c | Allowed: write

Subject

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.
'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'
Case is not changed.
If the number of arguments is not 1, display only a newline.

Examples:
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$

*/

#include <unistd.h>

void ft_putstr(char *av)
{
	int i = 0;
	while (av[i])
	{
		write(1, &av[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			{
				int k;
				if (av[1][i] >= 'a' && av[1][i] <= 'z')
				{
					if (av[1][i] >= 'a' && av[1][i] <= 'm')
					{
						k = 'm' - av[1][i];
						av[1][i] = 'n' + k;
					}
					else
					{
						k = av[1][i] -'n';
						av[1][i] = 'm' - k;
					}
				}
				else
				{
					if (av[1][i] >= 'A' && av[1][i] <= 'M')
					{
						k = 'M' - av[1][i];
						av[1][i] = 'N' + k;
					}
					else
					{
						k = av[1][i] -'N';
						av[1][i] = 'M' - k;
					}
				}
			}
			i++;
		}
		ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
