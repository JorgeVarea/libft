/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:04:41 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:12:09 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*delete_content)(void *))
{
	t_list 	*current;
	t_list	*tmp;

	current = *head;
	while (current)
	{
		tmp = current->next;
		ft_lstdelone(*head, delete_content);
		current = tmp;
	}
	ft_lstdelone(*head, delete_content);
	*head = NULL;
}
