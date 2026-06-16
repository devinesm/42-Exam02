/*
• File: ft_split.c | Allowed: malloc
Subject
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:
char **ft_split(char *str);

*/

#include <stdlib.h>

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int word_len(char *s, int i)
{
	int n = 0;
	while (s[i] && is_separator(s[i]) == 0)
	{
		n++;
		i++;
	}
	return n;
}

int count_words(char *s)
{
	int words = 0;
	int i = 0;

	while (s[i])
	{
		if (is_separator(s[i]) == 0)
		{
			words++;
			while (s[i] && is_separator(s[i]) == 0)
				i++;
		}
		else
			i++;
	}
	return (words);
}

char **ft_split(char *str)
{
	int amount_words = count_words(str);
	char **arr = malloc((amount_words + 1) * sizeof(char *));
	arr[amount_words] = NULL;

	int i = 0;
	int a = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i]) == 1)
			i++;

		if (!str[i])
			break;

		int len = word_len(str, i);
		arr[a] = malloc(len + 1);
		if (!arr[a])
			return (NULL);
		arr[a][len] = '\0';

		int j = 0;
		while (j < len)
		{
			arr[a][j] = str[i];
			i++;
			j++;
		}
		a++;
	}
	return (arr);
}
