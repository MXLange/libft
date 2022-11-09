/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msprenge <msprenge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:18:09 by msprenge          #+#    #+#             */
/*   Updated: 2022/11/09 12:35:14 by msprenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main()
{

	t_list *head;
	t_list *new;
	t_list *new2;

	if(!(head = malloc(sizeof(t_list))))
		return 0;
	if(!(new = malloc(sizeof(t_list))))
		return 0;
	if(!(new2 = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"head";
	head->next = NULL;

	new->content = (char *)"new";
	new->next = NULL;

	new2->content = (char *)"new2";
	new2->next = NULL;


	ft_lstadd_front(&head, new);

	printf("%s\n", (char *)new->content);
	printf("%s\n\n", (char *)new->next->content);

	ft_lstadd_front(&new, new2);

	printf("%s\n", (char *)new2->content);
	printf("%s\n", (char *)new->content);
	printf("%s\n", (char *)head->content);

	puts(new2->content);
	puts(new2->next->content);
	puts(new2->next->next->content);

	return 0;
}*/
