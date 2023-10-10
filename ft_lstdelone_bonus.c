/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:25:19 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/10 23:57:09 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes and frees a single node from a linked list,
 * and also frees the memory of its content using the given function pointer.
 *
 * @param lst: A pointer to the node to be removed.
 * @param del: A function pointer to a function used to delete the content
 *             of the node.
 *
 * The function checks if the given node is not NULL.
 * If true, it uses the 'del' function pointer to delete the node's content
 * and then frees the node itself.
 * Note: This function does not manage the connections/links of
 * surrounding nodes.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
