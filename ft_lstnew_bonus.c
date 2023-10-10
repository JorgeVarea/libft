/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:19:02 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/10 20:04:23 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new list element of type t_list and initializes
 * it with the provided content.
 *
 * @param content A pointer to the content to be stored in the new list element
 * @return A pointer to the newly created list element if successful,
 *  or NULL if memory allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*list_element;

	list_element = malloc(sizeof(t_list));
	if (!list_element)
		return (NULL);
	list_element->content = content;
	list_element->next = NULL;
	return (list_element);
}
