/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albokanc <albokanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:42:40 by albokanc          #+#    #+#             */
/*   Updated: 2023/11/17 14:59:09 by albokanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_calloc(1, 1));
	if (len > (slen - start))
		len = (slen - start);
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (s[start] && i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

/* int main()
{
	char *s;
	char *a;

	s = "lorem ipsum dolor sit amet";
	a = ft_substr(s, 3, 10);
	free(a);
	return(0);
}  */
