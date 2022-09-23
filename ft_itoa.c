/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:57:02 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/23 17:00:15 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convierte un número int en una cadena de caracteres.
Reservaremos en la memoria con malloc (3) del espacio que necesitaremos*/

/* Valor devuelto:  - La string que represente el número.
                    - NULL si falla la reserva de memoria.*/

#include "libft.h"

/* Primero tenemos que sacar el tamaño del valor que nos pasan.*/
int	ft_length(int num)
{
	int	len;

	len = 1;
	while (num / 10 != '\0')
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		i;
	int		len;

	len = ft_length(n);
	strnum = (char *)malloc(sizeof(char) * len + 1);
	if (!strnum)
		return (NULL);
	strnum[len] = '\0';
	i = 0;
	if (n < 0)
		strnum[i] = '-';
	if (n == 0)
		strnum[i] = '0';
	while (n > 0)
	{
		strnum[len - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (strnum);
}

/*int main(void)
{
    char    *dest;

    dest = ft_itoa(1500000);
    printf("%s\n", dest);
    free (dest);
    return (0);
}*/
