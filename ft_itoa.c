/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:57:02 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/27 12:58:09 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convierte un número int en una cadena de caracteres.
Reservaremos en la memoria con malloc (3) del espacio que necesitaremos*/

/* Valor devuelto:  - La string que represente el número.
                    - NULL si falla la reserva de memoria.*/

#include "libft.h"

static int	ft_length(int num)
{
	int	len;

	len = 1;
	while (num / 10 != 0)
	{
		len++;
		num = num / 10;
	}
	if (num < 0)
		len = len +1;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*strnum;
	int		i;
	int		strlen;
	long	num;

	num = n;
	strlen = ft_length(num);
	strnum = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!(strnum))
		return (NULL);
	strnum[strlen] = '\0';
	i = 0;
	if (num < 0)
	{
		strnum[i] = '-';
		num = num * -1;
	}
	if (num == 0)
		strnum[0] = '0';
	while (num > 0)
	{
		strnum[strlen - i++ - 1] = num % 10 + '0';
		num = num / 10;
	}
	return (strnum);
}

/*int main(void)
{
    char    *dest;

    dest = ft_itoa(9);
    printf("%s\n", dest);
    free (dest);
    return (0);
}*/
