/*
• File: ft_list_remove_if.c | Allowed: free

Subject

Write a function called ft_list_remove_if that removes from the passed list
any element the data of which is "equal" to the reference data.
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;
*/

#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
        return;

    t_list **curr = begin_list;
    t_list *temp;

    while (*curr)
    {
        if (cmp((*curr)->data, data_ref) == 0)
        {
            temp = *curr;
            *curr = temp->next;
            free(temp);
        }
        else
        {
            curr = &(*curr)->next;
        }
    }
}
