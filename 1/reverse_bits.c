/*
• File: reverse_bits.c | Allowed: none

Subject

Write a function that takes a byte, reverses it, bit by bit (like the example)
and returns the result.

Your function must be declared as follows:
unsigned char reverse_bits(unsigned char octet);

Example:
1 byte
_____________
0010 0110
||
\/
0110 0100

*/

unsigned char reverse_bits(unsigned char octet)
{
	int i = 7;
	unsigned char result = 0;

	while (i >= 0)
	{
		result = (result * 2) + (octet % 2);
		octet /= 2;
		i--;
	}
	return result;
}
