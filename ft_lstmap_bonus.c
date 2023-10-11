/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:28:24 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/11 12:00:21 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*start_lst;
	t_list	*start_new_lst;

	if (!lst || !f || !del)
		return (NULL);
	start_lst = lst;
	start_new_lst = malloc(ft_lstsize(lst) * sizeof(t_list));
	if (!start_new_lst)
		return (NULL);
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		ft_lstadd_back(&start_new_lst, new_lst);
		lst = lst->next;
	}
	ft_lstclear(&start_lst, del);
	return (start_new_lst);
}
