/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:26:17 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/10 19:12:57 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	dest1 = dest;
	src1 = src;
	i = 0;
	if (src == dest || n == 0)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <unistd.h>
int main(void)
{
	int dest[10] = {};
	int src[] = {1, 3, 3, 4, 5, 6, 7};
	int i;

	i = 0;
	ft_memcpy(dest, src, 5 * sizeof(int));
	while (i < 5)
	{
		printf("%d", dest[i]);
		i++;
	}
} */
