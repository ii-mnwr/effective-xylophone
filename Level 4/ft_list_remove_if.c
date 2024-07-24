#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

#endif

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if(begin_list == NULL || *begin_list == NULL)
		return ;
	t_list *current = *begin_list;
	if(cmp(current->data, data_ref) == 0)
	{
		*begin_list = current->data;
		free(current);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else{
		current = *begin_list;
		ft_list_remove_if(&current->data, data_ref, cmp);
	}
}