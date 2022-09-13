/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:47:13 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/13 15:26:35 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	unsigned const char	*origin;
	size_t				i;

	dest = (unsigned char *)dst;
	origin = (unsigned const char *)src;
	i = 0;
	if (!dest && !origin)
		return (0);
	if (dest > origin)
	{
		while (len-- != 0)
			dest[len] = origin[len];
	}
	if (dest < origin)
	{
		while (i < len)
		{
			dest[i] = origin[i];
			i++;
		}
	}
	return ((void *)dest);
}
/*int main(void)
{
    size_t  len;
    char    dest[] = "aritz hernando";
    char    src[] = "cosme";
    void    *result;
	

	//dest = src + 1;
    len = 7;
    result = ft_memmove(dest, src, len);
    printf("ft_memmove fuction: %s\n", (char *)dest);
    result = memmove(dest, src, len);
    printf("memmove fuction: %s\n", (char * )dest);
    return(0);
}*/