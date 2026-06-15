/*
• File: wdmatch.c | Allowed: write

Subject

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:
$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$

*/

#include <unistd.h>

int wdmatch(char *av1, char *av2)
{
	int i = 0;
	int j = 0;
	int written = 0;
	while (av1[i] && av2[j])
	{
		if (av1[i] == av2[j])
			i++;
		j++;
	}

	if (av1[i] == '\0')
		return (1);
	return (0);
}

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
	if (ac == 3)
	{
		int can_wdmatch = wdmatch(av[1], av[2]);
		if (can_wdmatch == 1)
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
