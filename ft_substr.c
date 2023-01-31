/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:09:44 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/28 12:39:07 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* DEFINICIÓN ******************************* */

/* Reserva memoria y devuelve una substring de la string original. La 
substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’. */

/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	str_len;
	char			*substr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > str_len)
		len = str_len - start;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

int	main(void)
{
	char const		*str;
	unsigned int	index;
	size_t			size;

	str = "cosme portuondo";
	index = 7;
	size = 10;
	printf("Fuction FT_SUBSTR: %s\n", ft_substr(str, index, size));
	return (0);
}
