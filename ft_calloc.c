/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:39:00 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/30 19:17:09 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (count == '0' || size == '0')
		return (NULL);
	dest = (char *)malloc(count * size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, size * count);
	return (dest);
}

/* int	main(void)
{
	void	*dest;
	size_t	size;
	size_t	count;

	size = 0;
	count = 0;
	dest = ft_calloc(count, size);
	printf("FT_CALLOC: %s\n", dest);
	free (dest);
	dest = calloc(count, size);
	printf("CALLOC: %s\n", dest);
	free (dest);
	return (0);
} */
