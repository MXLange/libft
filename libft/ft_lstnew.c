/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:58 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:01 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main()
{
	char	str[] = "Caraca, funcionou";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)elem->content);
	printf("\n%s\n", (char *)elem->next);
	return 0;
}*/
