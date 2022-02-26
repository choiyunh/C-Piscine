#ifndef LIST_H
# define LIST_H

typedef struct t_list
{
	struct t_list	*next;
	int				*data;
}					t_list;

#endif
