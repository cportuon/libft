/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:56:48 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/12 20:21:09 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)src;
	str2 = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	else
	{
		while (i < n)
		{
			str2[i] = str1[i];
			i++;
		}
		return (str2);
	}
}
/*int main(void)
{
    char str1[20] = "cosmeportubar@gmail.com";
    char str2[20] = "cportuon@gmail.com";
    size_t c;

    c = 3;
    ft_memcpy(str2, str1, c);
    printf("ft_memcpy fuction: %s\n", str2);
    memcpy(str2, str1, c);
    printf("memcpy fuction: %s\n", str2);
    return(0);
}*/
