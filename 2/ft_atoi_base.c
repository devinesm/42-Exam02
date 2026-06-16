/*
• File: ft_atoi_base.c | Allowed: none

Subject
Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef

Those are, of course, to be trimmed according to the requested base.

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of
the string.

Your function must be declared as follows:
int ft_atoi_base(const char *str, int str_base);

*/

int get_index(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (20);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int result = 0;
	int signal = 1;

	if (str_base < 2 || str_base > 16)
		return (0);

	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;

	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}

	while (get_index(str[i]) < str_base)
	{
		result = result * str_base + get_index(str[i]);
		i++;
	}
	return (result * signal);
}
