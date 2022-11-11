/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:19:06 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/11 12:18:05 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*temp;

	size = 0;
	if (!lst)
		return (0);
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
/*
int	main()
{
	int	size = 0;
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *new3;

	if(!(head = malloc(sizeof(t_list))))
		return 0;
	if(!(new = malloc(sizeof(t_list))))
		return 0;
	if(!(new2 = malloc(sizeof(t_list))))
		return 0;
	if(!(new3 = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"head";
	head->next = NULL;

	new->content = (char *)"new";
	new->next = NULL;

	new2->content = (char *)"new2";
	new2->next = NULL;

	new3->content = (char *)"new3";
	new3->next = NULL;


	ft_lstadd_front(&head, new);
	ft_lstadd_front(&new, new2);
	ft_lstadd_front(&new2, new3);
	size = ft_lstsize(new3);
	printf("%i\n", size);
	return 0;
}*/
