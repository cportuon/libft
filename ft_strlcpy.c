/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:49:36 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/08 12:48:41 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		length;

	i = 0;
	length = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}

/*int	main(void)
{			
	const char src[] = "Cosme";			
	char dst[] = "";
	size_t dstsize;

	dstsize = 2;
	printf("My fuction\nNúmero de carácteres de %s: %lu\n",
		src, ft_strlcpy(dst, src, dstsize));
	printf("Destiny = string 2: %s\n", dst);
	//printf("Fuction origin\nNúmero de carácteres del string 1: %lu\n",
		//strlcpy(dst, src, dstsize));	
	//printf("Destiny = string 2: %s\n", dst);
	return (0);
}*/
