/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:37 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/23 17:29:49 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------------------------- Descripción -------------------------------*/
/* Elimina todos los caracteres de la string ’set’ desde el principio y   */
/* desde el final de ’s1’, hasta encontrar un caracter no perteneciente   */
/* a ’set’. La string resultante se devuelve con una reserva de malloc(3) */
/* --------------------------- Devuelve ----------------------------------*/
/* La string recortada. NULL si falla la reserva de memoria.              */
/*------------------------------------------------------------------------*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && s1[start] == set[start])
		start++;
	end = ft_strlen(s1);
	i = 0;
	while (end > start && s1[end - 1] == set[i++])
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (start < end)
		str[j++] = s1[start++];
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*dst;

	dst = ft_strtrim("feliz viernes", "se");
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/
