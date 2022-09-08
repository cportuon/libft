/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:13:49 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/08 12:30:51 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int main(void)
{
	char unsigned c;
	char unsigned d;

	c = 'a';
	d = ft_toupper(c);
	printf("Cambiamos la letra %c a mayúscula %c", c, d);
	return (0);
}*/
