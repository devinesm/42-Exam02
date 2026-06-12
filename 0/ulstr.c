/*
• File: ulstr.c | Allowed: write

Subject

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.
You must display the result followed by a '\n'.
If the number of arguments is not 1, the program displays '\n'.

Examples:
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-
justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-
JUSTIFICATION.$
$>./ulstr | cat -e
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
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
            {
                if (av[1][i] >= 'a' && av[1][i] <= 'z')
                    av[1][i] -= 32;
                else
                    av[1][i] += 32;
            }
            i++;
        }
        ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}