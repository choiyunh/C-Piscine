#include "list.h"
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	t_list	*temp;

	cur = lst;
	while (cur)
	{
		if (cmp(*cur->data, *cur->next->data) == 0)
		{
			temp = cur->next;
			cur->next = cur;
			cur = temp;
		}
	}
}
