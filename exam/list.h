#ifndef LIST_H
# define LIST_H

typedef struct t_list
{
	struct t_list	*next;
	void			*data;
}					t_list;

#endif
