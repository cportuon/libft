/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:43:34 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/09 12:40:00 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;
	int d;

	c = 'g';
	d = ft_isalnum(c);
	if (d == 1)
		printf("%c es alfanúmerico", c);
	else
		printf("%c no es alfanúmerico", c);
    return(0);
}*/
