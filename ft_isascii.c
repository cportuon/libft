/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:21:26 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/08 11:29:45 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (0);
	return (1);
}

/*int	main(void)
{
	int	c;
	int d;

	c = 'p';
	d = ft_isascii(c);
	if(d == 0)
		printf("%c es un caracter ASCII", c);
	else
		printf("%c no es un caracter ASCII", c);
}*/
