/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:02:09 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:05:40 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new_node)
{
	t_list	*last_node;

	if (!*head)
		*head = new_node;
	else
	{
		last_node = ft_lstlast(*head);
		last_node->next = new_node;
	}
}
