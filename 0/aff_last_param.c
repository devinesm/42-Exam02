/*
• File: aff_last_param.c | Allowed: write

Subject

Write a program that takes strings as arguments, and displays its last argument
followed by a newline.
If the number of arguments is less than 1, the program displays a newline.

Examples:
$> ./aff_last_param "zaz" "mange" "des" "chats"
chats
$> ./aff_last_param "j'aime le savon"
j'aime le savon
$> ./aff_last_param
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
        ft_putstr(av[ac - 1]);
    }
    write(1, "\n", 1);
    return (0);
}