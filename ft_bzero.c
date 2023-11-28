/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:20:06 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/07 20:19:26 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/* #include <stdio.h>
int	main(void)
{
	char str[50] = "bla";
	char str2[50] = "bla";

	ft_bzero(str, 1);
	printf("%s\n", str);
	ft_bzero(str, 1);
	printf("%s", str);
	return (0);
}  */