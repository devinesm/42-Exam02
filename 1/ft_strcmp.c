/*
• File: ft_strcmp.c | Allowed: none

Subject

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:
int ft_strcmp(char *s1, char *s2);

*/

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
