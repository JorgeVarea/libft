/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:19:02 by jorvarea          #+#    #+#             */
/*   Updated: 2024/02/03 16:38:01 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list_element;

	list_element = malloc(sizeof(t_list));
	if (list_element)
	{
		list_element->content = content;
		list_element->next = NULL;
	}
	return (list_element);
}
