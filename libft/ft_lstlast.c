/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:36 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/11 12:03:32 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
/*
int	main()
{
	char *result;
	t_list *head;
	t_list *new;
	t_list *new2;
	t_list *new3;

	if(!(result = malloc(sizeof(t_list))))
		return 0;
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

	result = (char *)ft_lstlast(new3)->content;
	printf("%s\n", result);
	return 0;
}*/
