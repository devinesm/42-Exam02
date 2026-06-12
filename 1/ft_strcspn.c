/*
• File: ft_strcspn.c | Allowed: none

Subject

Reproduce exactly the behavior of the function strcspn (man strcspn).

The function should be prototyped as follows:
size_t ft_strcspn(const char *s, const char *reject);

*/

#include <stddef.h>
size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while (s[i])
	{
		size_t j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
