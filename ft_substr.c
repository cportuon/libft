/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:09:44 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/21 10:12:53 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest || start > ft_strlen(s))
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
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
	index = 7;
	size = 2;
 	printf("Fuction FT_SUBSTR: %s\n", ft_substr(str, index, size));
	//printf("Fuction SUBSTR: %d\n", substr(str, index, size));
	return (0);
}*/
