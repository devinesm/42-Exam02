/*
• File: flood_fill.c | Allowed: none

Subject

Write a function that takes a char** as a 2-dimensional array of char, a
t_point as the dimensions of this array and a t_point as the starting point.
Starting from the given 'begin' t_point, this function fills an entire zone
by replacing characters inside with the character 'F'. A zone is a group of
the same character delimited horizontally and vertically by other characters
or the array boundary.

The flood_fill function won't fill diagonally.
void flood_fill(char **tab, t_point size, t_point begin);

typedef struct s_point
{
int x;
int y;
} t_point;


Example:

t_point size = {8, 5};
char *zone[] = {
"11111111",
"10001001",
"10010001",
"10110001",
"11100001",
};
t_point begin = {7, 4};
// After flood_fill:
FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
*/