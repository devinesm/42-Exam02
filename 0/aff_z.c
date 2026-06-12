/*
• File: aff_z.c | Allowed: write

Subject

Write a program that takes a string, and displays the character 'z'
followed by a newline.

Example:
$> ./aff_z "abc" | cat -e
z$
$> ./aff_z | cat -e
z$

*/

#include <unistd.h>

int main(void)
{
    write(1, "z\n", 2);
    return (0);
}