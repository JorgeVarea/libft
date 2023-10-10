/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:02:09 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/10 21:40:05 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Appends a new element to the end of the given linked list.
 *
 * @param lst   A pointer to the pointer of the head of the list.
 *              If the list is empty, this will point to the new element
 *              after the function returns.
 * @param new   The new element to be added to the end of the list.
 *
 * Note: If the list is initially empty,
 * the new element will become the head of the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
