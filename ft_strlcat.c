/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:58:20 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/08 12:01:09 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{			
	size_t	src_len;			
	size_t	dst_len;			
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dst_len)
		return (dstsize + src_len);
	while (i < (dstsize - 1 - dst_len) && (src[i] != '\0'))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	const char	src[30] = "Cosme";
	char		dst[30] = "Hola";
	size_t		dst_size = 9;

	printf("\nMy fuction\nReturn: %lu\nResult: %s\n\n",
		ft_strlcat(dst, src, dst_size), dst);
	printf("Fuction origin\nReturn: %lu\nResult: %s\n\n",
		strlcat(dst, src, dst_size), dst);
}*/
