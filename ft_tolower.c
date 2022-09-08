/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:27:56 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/02 12:57:28 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if(c >= 65 && c <= 90)
		return (c + 32);
	return(c);
}

int main(void)
{
	char unsigned c;
	char  unsigned d;

	c = 'A';
	d = ft_tolower(c);
	printf("Cambiamos la letra %c en maúsculas %c", c, d);
}
