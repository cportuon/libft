/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmpi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <cportuon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:57:17 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/23 17:37:06 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*______________________DESCRIPCION___________________________*/
/*	A cada carácter de la string ’s’, aplica la función ’f’
 	dando como parámetros el índice de cada carácter dentro
 	de ’s’ y el propio carácter. Genera una nueva string con
  	el resultado del uso sucesivo de ’f’					  */
/*_____________________DEVUELVE_______________________________*/
/*	La string creada tras el correcto uso de ’f’ sobre cada 
	carácter. NULL si falla la reserva de memoria		      */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cpy;
	int		i;
	
	if (!s)
		return (NULL);
	i = 0;
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!cpy)
		return (NULL);
	while (s[i] != '\0')
	{
		cpy[i] = f(i, s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	mi_funcion(unsigned int i, char str)
{
   i = 32;
   return (str - i);
}

int main(void)
{
   char    *str;
   char    *resultado;
 
   str = "?hola?guapa.?";
   printf("el resultado es: %s\n", str);
   resultado = ft_strmapi(str, mi_funcion);
   printf("el resultado es: %s\n", resultado);
   return (0);
}
