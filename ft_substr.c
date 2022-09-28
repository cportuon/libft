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

/* Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La 
substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’. */

/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*substr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > str_len)
		len = str_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while ((len > i) && s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char const		*str;
	unsigned int	index;
	size_t			size;

	str = "cosme portuondo";
	index = 20;
	size = 2;
	printf("Fuction FT_SUBSTR: %s\n", ft_substr(str, index, size));
	return (0);
}*/
