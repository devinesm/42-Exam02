/*
• File: rstr_capitalizer.c | Allowed: write

Subject

Write a program that takes one or more strings and, for each argument, puts
the last character that is a letter of each word in uppercase and the rest
in lowercase, then displays the result followed by a \n.

A word is a section of string delimited by spaces/tabs or the start/end of
the string.

If there are no parameters, display \n.

Examples:
$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT Moar comPLEX" " But... This iS not THAT COMPLEX
e
seconD tesT A littlE biT moaR compleX$
but... thiS iS noT thaT compleX$

*/

#include <unistd.h>

void rstr_capitalizer(char *s)
{
	int i = 0;
	while (s[i])
	{
		char c = s[i];

		if (c >= 'A' && c <= 'Z')
			c += 32;

		int is_last = (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0');

		if (is_last && (c >= 'a' && c <= 'z'))
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
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
