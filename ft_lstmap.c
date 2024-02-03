/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:28:24 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:35:17 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *head, void *(*f)(void *), void (*delete_content)(void *))
{
	t_list 	*current;
	t_list	*new_lst;
	t_list	*new_element;

	if (!head || !f || !delete_content)
		return (NULL);
	new_lst = NULL;
	current = head;
	while (current)
	{
		new_element = ft_lstnew(f(current->content));
		if (!new_element)
		{
			ft_lstclear(&new_lst, delete_content);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_element);
		current = current->next;
	}
	return (new_lst);
}
