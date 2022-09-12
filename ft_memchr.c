/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:56:28 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/12 19:39:45 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
/*int  main(void)
{
     const char     *str;
     int  c;
     size_t    n;
     
     str = "Gilipollas!";
     c = 's';
     n = 5;
     printf("ft_memchr fuction: %d\n", ft_memchr(str, c, n));
     printf("memchr fuction: %d\n", memchr(str, c, n));
}*/
