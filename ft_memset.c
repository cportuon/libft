/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:57:33 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/12 18:13:35 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = str;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (str);
}
/*int main(void)
{
    char    str[20] = "Voy a matar a Paco";
    int c;
    size_t  n;
    char *rst;

    c = '$';
    n = 6;
    rst = ft_memset(str, c, n);
    printf("ft_memset fuction: %s\n", rst);
        rst = memset(str, c, n);
    printf("memset fuction:    %s\n", rst);
    return(0);
}*/
