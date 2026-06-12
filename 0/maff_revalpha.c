/*
• File: maff_revalpha.c | Allowed: write

Subject

Write a program that displays the alphabet in reverse order, with even letters
in uppercase, and odd letters in lowercase, followed by a newline.

Example:
$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$

*/

#include <unistd.h>
int main(void)
{
    write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
    return (0);
}