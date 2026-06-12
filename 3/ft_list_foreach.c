/*
• Files: ft_list_foreach.c, ft_list.h | Allowed: none

Subject

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:
(*f)(list_ptr->data);

You must use the following structure, and turn it in as ft_list.h:

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

• Approach: Walk the list and call f(node->data) for each node.
• Note: Submit both ft_list_foreach.c and ft_list.h.

*/