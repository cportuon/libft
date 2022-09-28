/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:48 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/28 18:23:42 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************DESCRIPCIÓN*********************************** */
/*	Reserva (utilizando malloc(3)) un array de strings resultante de separar  */
/*	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.  */
/*	El array debe terminar con un puntero NULL.								  */
/* *****************************DEVUELVE************************************* */
/*	El array de nuevas strings resulatente de la separación.                  */
/*	NULL si falla la reserva de memoria.                                      */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substr_count(char const *str, char a)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if (str[i] != a)
		{
			while (str[i] != '\0' && str[i] != a)
				i++;
			size++;
			continue ;
		}
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char				**strings;
	unsigned int		i;
	unsigned int		j;
	unsigned int		start;

	strings = (char **)malloc(sizeof(char *) * (ft_substr_count(s, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			strings[j] = ft_substr(s, start, i - start);
			j++;
			continue ;
		}
		i++;
	}
	strings[j] = NULL;
	return (strings);
}

/*int	main(void)
{
	char const	s[25] = "  hola  que pasa";
	char		c;
	char		**result;
	int			check;

	c = ' ';
	result = ft_split(s, c);
	check = -1;
	while (result[++check])
		printf("line [%d] -> %s\n", check, result[check]);
	return (0);
}*/
