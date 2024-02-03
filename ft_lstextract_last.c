/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstextract_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:10:31 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:31:48 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstextract_last(t_list *head)
{
	t_list	*previous;
	t_list	*current;

	current = NULL;
	if (head != NULL && head->next != NULL)
	{
		previous = head;
		current = head->next;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		previous->next = NULL;
	}
	return (current);
}
