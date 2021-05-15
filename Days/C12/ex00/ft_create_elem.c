#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *list;
	list = malloc(sizeof(t_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

int		main(void)
{
	void *data;
	t_list *hey = ft_create_elem(data);
	printf("%s", hey->next);
}
