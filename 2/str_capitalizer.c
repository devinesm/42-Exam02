/*
• File: str_capitalizer.c | Allowed: write

Subject
Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each word (if it's a letter), puts the
rest in lowercase, and displays the result on the standard output, followed
by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If there are no arguments, the program must display \n.

Example:
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLE
e
__second Test A Little Bit Moar Complex$
But... This Is Not That Complex$

*/
#include <unistd.h>

void str_capitalizer(char *s)
{
	int i = 0;
	while (s[i])
	{
		char c = s[i];
		if (c >= 'A' && c <= 'Z')
			c += 32;

		int is_first = ((i == 0) || (s[i - 1] == ' ' || s[i - 1] == '\t'));
		if (is_first == 1 && (c >= 'a' && c <= 'z'))
			c -= 32;

		write(1, &c, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 1;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
