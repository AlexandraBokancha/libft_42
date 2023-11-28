/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:35:31 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/10 17:34:15 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[50] = "";
	char str2[50] = "";

	ft_memset(str, '$', 6);
	printf("%s\n", str);
	memset(str2, '$', 6);
	printf("%s", str);
	return (0);
} */
