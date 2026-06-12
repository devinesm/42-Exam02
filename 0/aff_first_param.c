/*
• File: aff_first_param.c | Allowed: write

Subject

Write a program that takes strings as arguments, and displays its first
argument followed by a newline.
If the number of arguments is less than 1, the program displays a newline.

Examples:
$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le savon"
j'aime le savon
$> ./aff_first_param
$

*/

#include <unistd.h>

void ft_putstr(char *av)
{
    int i = 0;
    while (av[i])
    {
        write(1, &av[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}