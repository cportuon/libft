/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:15:22 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/28 13:45:39 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* DEFINICION ******************************* */

/* La función strdup asigna suficiente memoria para una copia de la cadena
s1, realiza la copia y devuelve un puntero a la misma.  El puntero puede
utilizarse posteriormente como argumento para la función free(3).
Si no hay suficiente memoria disponible, se devuelve NULL y errno se pone a
ENOMEM. */

/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	strlen;
	char			*s2;

	strlen = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(*s1) * strlen);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, strlen);
	return (s2);
}

/*int	main(void)
{
	printf("Fuction FT_STRDUP: %s\n", ft_strdup("Good morning"));
	printf("Fuction STRDUP: %s\n", strdup("Good morning"));
	return (0);
}*/
