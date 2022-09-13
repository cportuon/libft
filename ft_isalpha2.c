/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:27:12 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/09 11:27:13 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int main (void)
{
	int c;
	int d;

	c = 'f';
	d = ft_isalpha(c);
	if (d == 1)
		printf("%c es un caracter", c);
	else
		printf("%c no es un caracter", c);
    return(0);
}*/
