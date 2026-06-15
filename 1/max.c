/*
• File: max.c | Allowed: none

Subject

Write the following function:
int max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements
in the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.

*/

int max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int max = tab[0];
	unsigned int i = 1;

	while (i <= (len - 1))
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
