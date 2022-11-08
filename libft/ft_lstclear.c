
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	*temp;

	if (!lst || !del)
		return;
	while (temp)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
