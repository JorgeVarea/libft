/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:08:01 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/10 20:18:13 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Add a new element to the front of a linked list.
 *
 * This function places the 'new' element at the beginning of the linked list
 * pointed to by 'lst', effectively making the 'new' element the new head of
 * the list.
 *
 * @param lst A pointer to the pointer to the current head of the linked list.
 * @param new A pointer to the new element to be added to the front of the list
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
