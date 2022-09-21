/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:15:22 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/21 11:26:18 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Asigna memoria suficiente para una copia de la cadena s1, hace la copia y 
le devuelve un puntero. El puntero se puede utilizar posteriormente como 
argumento de la función free(3). Si no hay suficiente memoria disponible, 
se devuelve NULL y errno se establece en ENOMEM*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	printf("Fuction FT_STRDUP: %s\n", ft_strdup("Good morning"));
	printf("Fuction STRDUP: %s\n", strdup("Good morning"));
	return (0);
}*/
