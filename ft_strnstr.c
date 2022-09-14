/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:31:07 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/14 12:13:01 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j]
				&& needle[j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	htk[] = "En Urduliz esta lloviendo";
	const char	ndl[] = "esta";
	size_t		n;

	n = 14;
	printf("strnstr fuction: %s\n", strnstr(htk, ndl, n));
	printf("ft_strnstr fuction: %s\n", ft_strnstr(htk, ndl, n));
}*/
