/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:09:47 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/16 12:56:14 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca cierta letra dentro de una cadena de texto empezando desde atrás.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		strlen;

	str = (char *)s;
	strlen = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (&str[strlen]);
	while (strlen >= 0)
	{
		if (str[strlen] == (unsigned char)c)
			return (&str[strlen]);
		strlen--;
	}
	return (0);
}
/*int  main(void)
{
    const char *str;
    int coin;
    char *rst;

    str = "cportuon";
    coin = 'o';
    rst = ft_strrchr(str, coin);
    printf("ft_strrchr fuction:%s\n", rst);
    rst = strrchr(str, coin);
    printf("strrchr fuction:%s\n", rst);
    return(0);
}*/
