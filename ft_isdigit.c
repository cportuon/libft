/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:00:32 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/02 12:57:33 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

int main(void)
{
	int c;
	int d;

	c = 't';
	d = ft_isdigit(c);
	if (d == 1)
		printf("%c es un número", c);
	else
		printf("%c no es un número", c);
}
