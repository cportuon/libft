/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:46:59 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/16 13:08:07 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Busca un carácter dentro de una cadena de texto.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&str[i]);
	return (0);
}
int main(void)
{
    const char *str;
    int coin;
    char *rst;

    str = "cportuon";
    coin = 'r';
    rst = ft_strchr(str, coin);
    printf("ft_strchr fuction: %s\n", rst);
    rst = strchr(str, coin);
    printf("strchr fuction: %s\n", rst);
    return(0);
}
