/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:16:39 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/22 18:07:39 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function ’f’ on the content of each node

#include "libft.h"

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
