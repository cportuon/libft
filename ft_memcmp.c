/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:30:28 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/13 17:46:10 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{	
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	unsigned char	str1[] = "hola mundo";
	unsigned char	str2[] = "hello world";
	size_t			i;
	
	i = 3;
	printf("memcmp fuction:\n%d\n", memcmp(str1, str2 , i));
	printf("ft_memcmp fuction:\n%d\n", ft_memcmp(str1, str2, i));
	return (0);
}*/