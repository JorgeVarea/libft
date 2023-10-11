/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorvarea <jorvarea@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:46:05 by jorvarea          #+#    #+#             */
/*   Updated: 2023/10/11 12:20:06 by jorvarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void ft_delete(void *content)
{
    free(content);
}

static void ft_f1 (void *content)
{
    printf("%s\n", (char*)content);
}

static void *ft_f2 (void *content)
{
    return ("pringao");
}

int main(void)
{
    /* ______________lstnew_______________ 
    t_list *element;
    char *content;
    
    printf("Testing lstnew...\n");
    content= "Hola";
    element = ft_lstnew(content);
    printf("Content: %s\n", element->content);
    printf("Next: %p\n", element->next);
    free(element);
    */
   
   /* ______________lstadd_front_______________ 
    t_list *lst;
    t_list *first_element;
    t_list *new;
    
    printf("Testing lstadd_front...\n");
    first_element = ft_lstnew("hola");
    new = ft_lstnew("hola2");
    lst = first_element;
    ft_lstadd_front(&lst, new);
    printf("First element's content: %s\n", lst->content);
    printf("First element's next: %p\n", lst->next);
    printf("New element points to: %p\n", new->next);
    */
   
    t_list *lst;
    t_list *e1;
    t_list *e2;
    t_list *e3;
    t_list *e4;
    t_list *last;
    t_list *new_lst;

    printf("Testing lstsize...\n");
    e3 = ft_lstnew("hola3");
    lst = e3;
    e2 = ft_lstnew("hola2");
    ft_lstadd_front(&lst, e2);
    e1 = ft_lstnew("hola1");
    ft_lstadd_front(&lst, e1);
    printf("Size of list: %d\n", ft_lstsize(lst));
    
    printf("Testing lstlast...\n");
    last = ft_lstlast(lst);
    printf("Last element's content: %s\n", (char*)last->content);
    printf("Last element's next: %p\n", last->next);
    
    printf("Testing lstadd_back...\n");
    e4 = ft_lstnew("hola4");
    ft_lstadd_back(&lst, e4);
    last = ft_lstlast(lst);
    printf("Last element's content: %s\n", (char*)last->content);
    printf("Last element's next: %p\n", last->next);
    
    /* _____________________lstdelone_______________________
    printf("Testing lstdelone...\n");
    ft_lstdelone(e4, ft_delete);
    printf("Whatever is left in the deleted node: %p\n", e4->content);
    */
    
    printf("Testing lstiter...\n");
    ft_lstiter(lst, ft_f1);

    /* ___________________lstclear_______________________
    printf("Testing lstclear...\n");
    ft_lstclear(&lst, ft_delete);
    printf("Whatever is left in the first deleted node: %p\n", lst->content);
    */

    printf("Testing lstmap...\n");
    new_lst = ft_lstmap(lst, ft_f2, ft_delete);
    ft_lstiter(new_lst, ft_f1);
    
    return (0);
}
