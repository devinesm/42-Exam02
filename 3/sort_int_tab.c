/*
• File: sort_int_tab.c | Allowed: none

Subject

Write the following function:
void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.

*/

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;

	while (i + 1 < size)
	{
		if (tab[i] > tab[i + 1])
		{
			int temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
