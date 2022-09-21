/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:09:44 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/21 13:02:59 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Coge n(len)caracteres de un string (s)desde la posición inicial (start).*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (start > ft_strlen(s))
	{
		dest[i] = '\0';
		return (dest);
	}
	while (len > 0)
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
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
