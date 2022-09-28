/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:48 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/28 13:46:44 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ****************************DESCRIPCIÓN*********************************** */
/*	Reserva (utilizando malloc(3)) un array de strings resultante de separar  */
/*	la string ’s’ en substrings utilizando el caracter ’c’ como delimitador.  */
/*	El array debe terminar con un puntero NULL.								  */
/* ************************************************************************** */
/* *****************************DEVUELVE************************************* */
/*	El array de nuevas strings resulatente de la separación.                  */
/*	NULL si falla la reserva de memoria.                                      */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substr_count(char const *str, char a)
{
	int	i;
	int	size;

	while (str[i] != '\0')
	{
		if (str[i] != a)
		{
			while (str[i] != '\0' && str[i] != a)
				i++;
			size++;
		}
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		substr;
	int		i;
	int		j;
	int		start;

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
		}
		i++;
	}
	strings[j] = NULL;
	return (strings);
}

/*int	main(void)
{
	char const	*str;
	char		c;
	char		**tab;

	str = "Cosme sub Bárcena";
	c = ' ';
	tab = ft_split(str, c);
	printf("String orginal%s\n", str);
	printf("Substrings del string original%s\n", tab[0]);
	free (&str);
	return (0);
}*/
