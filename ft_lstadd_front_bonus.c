/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:37:43 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/22 18:07:29 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* 
int main()
{
    char    str2[] = "This is head";
    char    str[] = "This is new";
    t_list *new = ft_lstnew(str);
    t_list *old = ft_lstnew (str2);
    t_list  *head;
    head = old;
    printf("Head == %s\n", (char *)head->content);
    ft_lstadd_front(&head, new);
    printf("Head is now == %s\n", (char *)head->content);
} */
