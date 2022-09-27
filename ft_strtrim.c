/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:37 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/27 12:01:55 by cportuon         ###   ########.fr       */
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

static int	ft_check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check_char(s1[end -1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*dst;

	dst = ft_strtrim(" feliz viernes", "f ");
	printf("%s\n", dst);
	free(dst);
	return (0);
}*/
