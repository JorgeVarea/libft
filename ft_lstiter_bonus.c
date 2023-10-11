/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:17:21 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/11 11:26:54 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates over a linked list and applies the function 'f'
 * to the content of each node.
 *
 * @param lst: A pointer to the first node of the list to be iterated.
 * @param f: A function pointer used to process the content of each node.
 *
 * The function traverses each node in the linked list, starting from the
 * beginning. For each node, it applies the function 'f' to its content.
 * Iteration is halted if either 'lst' or 'f' is NULL.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
