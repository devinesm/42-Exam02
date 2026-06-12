/*
• File: ft_strdup.c | Allowed: malloc

Subject

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:
char *ft_strdup(char *src);

*/

#include <stdlib.h>

int ft_strlen(char *av)
{
	int i = 0;
	while (av[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int len = ft_strlen(src);
	char *new = malloc(len + 1);

	if (!new)
		return (NULL);

	int i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
