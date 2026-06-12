/*
• File: sort_list.c | Allowed: none

Subject

Write the following function:
t_list *sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the first
element of the sorted list.
Duplications must remain.

You must use the type t_list described in the file list.h that is provided
to you (#include "list.h"). Do not turn it in.

Functions passed as cmp will return a value different from 0 if a and b are
in the right order, 0 otherwise.

int ascending(int a, int b) { return (a <= b); }
list.h content:

typedef struct s_list t_list;
struct s_list { int data; t_list *next; };
*/