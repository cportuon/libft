/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:57:29 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/21 17:57:31 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  A cada carácter de la string ’s’, aplica la función
    ’f’ dando como parámetros el índice de cada
    carácter dentro de ’s’ y la dirección del propio
    carácter, que podrá modificarse si es necesario.        */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int     i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

/*void    ft_change(unsigned int i, char *str)
{
        *str = *str + i;
}
 
int main(void)
{
    char    string[] = "Holaaaagurrrr";
    printf("string sin modificar = %s\n", string);
    ft_striteri(string, ft_change);
    printf("string modificada = %s\n", string);
    return(0);
}*/
