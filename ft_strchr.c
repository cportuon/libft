/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:46:59 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/09 13:07:06 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int coin)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == coin)
			return (&str[i]);
		i++;
	}
	if (coin == '\0')
		return (&str[i]);
	return (0);
}
/*int main(void)
{
    const char *str;
    int coin;
    char *rst;

    str = "cportuon";
    coin = '\0';
    rst = ft_strchr(str, coin);
    printf("ft_strchr fuction: %s\n", rst);
    rst = strchr(str, coin);
    printf("strchr fuction: %s\n", rst);
}*/
