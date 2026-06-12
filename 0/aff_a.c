/*
• File: aff_a.c | Allowed: write

Subject

Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays a newline.

Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
$

*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if (av[1][i] == 'a')
            {
                write(1, "a", 1);
                break;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}