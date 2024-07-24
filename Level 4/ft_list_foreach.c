// IN ft_list.h file 
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

#endif

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr = begin_list;

    while(list_ptr)
    {
        if(list_ptr->data)
            (*f)(list_ptr->data);
        begin_list = begin_list->next;
    } 
}