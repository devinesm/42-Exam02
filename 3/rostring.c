/*
• File: rostring.c | Allowed: write, malloc, free

Subject

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.
A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.
If there'av[1] less than one argument, the program displays \n.

Example:
$>./rostring "abc " | cat -e
abc$
$>./rostring "Que la lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>./rostring " AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>./rostring | cat -e
$

*/

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        int i = 0;
        while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
            i++;

        int start_first_word = i;
        while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i++;
        int end_first_word = i;

        int has_more_words = 0;

        while (av[1][i])
        {
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;

            if (av[1][i])
            {
                if (has_more_words)
                    write(1, " ", 1);

                while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                has_more_words = 1;
            }
        }

        if (has_more_words)
            write(1, " ", 1);

        while (start_first_word < end_first_word)
        {
            write(1, &av[1][start_first_word], 1);
            start_first_word++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
