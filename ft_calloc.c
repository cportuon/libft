/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:39:00 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/14 18:44:06 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(size * count);
	if (!dest)
		return (0);
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	return ((void *)dest);
}

/*int	main(void)
{
	void	*dest;
	size_t	size;
	size_t	count;

	size = 4;
	count = 3;
	dest = ft_calloc(count, size);
	printf("FT_CALLOC: %s\n", dest);
	free (dest);
	dest = calloc(count, size);
	printf("CALLOC: %s\n", dest);
	free (dest);
	return (0);
}*/
