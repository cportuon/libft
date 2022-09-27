/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:48 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/27 19:47:16 by cportuon         ###   ########.fr       */
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

static int	ft_sizex(char const *str, char a)
{
	int		i;
	int		x;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	x = 1;
	while (str[i] != '\0')
	{
		while (str[j] != a)
		{
			temp[j] = str[j];
			j++;
		}
		if (str[i] == a)
			if ()
			x++;
		i++;
	}
	return (x);
}

static int	ft_sizey(char const *str, char a)
{
	int		i;
	int		y;
	char	*substr;

	i = 0;
	while (str[i] != a)
	{
		substr[i] = str[i];
		ft_strlen(substr);
	}
	return (y);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*x;

	x = (char *)malloc(sizeof(char *) * ft_sizex(s, c));
	if (!x)
		return (NULL);
	while (result[0][i])
	{
		
	}
}

int	main(void)
{
	char const	*str;
	char		c;
	char		**tab;

	str = "Cosme Portuondo Bárcena";
	c = ' ';
	tab = ft_split(str, c);
	printf("String orginal%s\n", str);
	printf("Substrings del string original%s\n", tab[0]);
	free (&str);
	return (0);
}
