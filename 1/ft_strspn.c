/*
• File: ft_strspn.c | Allowed: none

Subject

Reproduce the behavior of the function strspn (man strspn).

The function must be declared as follows:
size_t ft_strspn(const char *s, const char *accept);

*/

#include <stddef.h>
size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int found;

	while (s[i])
	{
		size_t j = 0;
		found = 0;
		while (accept[j] && found == 0)
		{
			if (accept[j] == s[i])
				found = 1;
			j++;
		}

		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}
