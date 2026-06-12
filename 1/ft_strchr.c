/*
• File: ft_strchr.c | Allowed: none

Subject

Reproduce the behavior of the function strchr (man strchr).

The function must be declared as follows:
char *ft_strchr(const char *s, int c);

*/

char *ft_strchr(const char *s, int c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}

	if ((char)c == '\0')
		return ((char *)&s[i]);

	return (0);
}
