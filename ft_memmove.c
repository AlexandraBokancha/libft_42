/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:07:20 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/10 17:44:58 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_drct(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	*ft_memcpy_invr(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	i;

	i = n - 1;
	while (i > 0)
	{
		dest[i] = src[i];
		i--;
	}
	dest[i] = src[i];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;

	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from == to || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy_drct(to, from, n);
	if (dest > src)
		ft_memcpy_invr(to, from, n);
	return (dest);
}

// #include <unistd.h>
// int main(void)
// {
//     char src[100] = "lorem ipsum dolor sit amet";
//     char *dest = src + 1;
// 	printf("%p\n", ft_memmove(dest, "consectetur", 5));
// 	printf("%s\n", dest);
// }