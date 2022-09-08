/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:10:47 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/08 11:45:40 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;
	int d;

	c = '6';
	d = ft_isprint(c);
	if(d == 1)
		printf("%c es un carácter imprimible", c);
	else
		printf("%c no es un carácter imprimible", c);
}*/
