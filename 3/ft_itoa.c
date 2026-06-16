/*
• File: ft_itoa.c | Allowed: malloc

Subject

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:
char *ft_itoa(int nbr);

*/

#include <stdlib.h>

int get_len(long n)
{
	int len = 0;
	if (n <= 0)
		len = 1;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	long n = nbr;
	int len = get_len(n);
	char *result = malloc(sizeof(char) * (len + 1));

	if (!result)
		return (NULL);

	result[len] = '\0';

	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}

	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}

	while (n > 0)
	{
		len--;
		result[len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
