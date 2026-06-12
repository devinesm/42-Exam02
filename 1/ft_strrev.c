/*
• File: ft_strrev.c | Allowed: none

Subject

Write a function that reverses (in-place) a string.
It must return its parameter.

Your function must be declared as follows:
char *ft_strrev(char *str);

*/

int ft_strlen(char *av)
{
	int i = 0;
	while (av[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int len = ft_strlen(str) - 1;
	int i = 0;
	char temp;

	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		
		len--;
		i++;
	}
	return (str);
}
