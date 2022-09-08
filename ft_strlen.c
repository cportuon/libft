/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:18:06 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/02 15:01:03 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const  char *str)
{
	int i;

	i= 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

/*int main(void)
{
	char *str;
	int i;

	str = "cosme";
   	i = ft_strlen(str);
	printf("%d es la longitud de %s", i, str);
}*/
