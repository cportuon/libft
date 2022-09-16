/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:07:42 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/16 11:20:51 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Si encuentra carácteres no númerico antes de el número los ignora.
	Si encuentra un signo negativo el resultado sera negativo con signo.
	Si encuentra un signo positivo el resultado sera positivo sin signo.
	Si después del signo no encuentra un número devuelvo cero. 
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		dest;
	int		sign;
	size_t	i;

	dest = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest = dest * 10 + str[i] - '0';
		i++;
	}
	return (dest * sign);
}
/*int main(void)
{
	printf("Pruebas atoi:\n%d\n", atoi("123"));
	printf("%d\n", atoi(" 123"));
	printf("%d\n", atoi("+123"));
	printf("%d\n", atoi("--123"));
	printf("%d\n", atoi("-123p2"));
	printf("Pruebas ft_atoi:\n%d\n", ft_atoi("123"));
	printf("%d\n", ft_atoi(" 123"));
	printf("%d\n", ft_atoi("+123"));
	printf("%d\n", ft_atoi("--123"));
	printf("%d\n", ft_atoi("-123p2"));
}*/