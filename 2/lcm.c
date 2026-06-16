/*
• File: lcm.c | Allowed: none

Subject
Write a function who takes two unsigned int as parameters and returns the
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest positive
integer divisible by both integers.

If at least one integer is null, LCM is equal to 0.

Your function must be prototyped as follows:
unsigned int lcm(unsigned int a, unsigned int b);

*/

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);

	unsigned int highest;
	if (a > b)
		highest = a;
	else
		highest = b;

	unsigned int step = highest;

	while ((highest % a != 0) || (highest % b != 0))
	{
		highest += step;
	}
	return (highest);
}
