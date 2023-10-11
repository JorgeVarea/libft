/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:04:41 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/11 11:26:58 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates through the linked list and clears its content,
 * freeing the memory of each node using the provided function pointer.
 *
 * @param lst: A pointer to the pointer to the first node of the list
 *             to be cleared.
 * @param del: A function pointer used to delete the content of each node.
 *
 * The function starts at the beginning of the linked list, advancing through
 * each node, freeing the content using the 'del' function and the node itself.
 * Once all nodes are freed, it sets the starting node pointer to NULL.
 * Note: The function also checks if the 'lst' or its dereferenced value
 * is NULL before attempting the clear operation.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		next_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_lst;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
