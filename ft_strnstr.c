/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:26:28 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/15 15:00:05 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0' || little == big)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && little[j] == big[i + j])
		{	
			j++;
		}
		if (j == ft_strlen(little) && i + j <= len)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
