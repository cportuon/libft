/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:37 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/21 17:56:38 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------------------------- Descripción -------------------------------*/
/* Elimina todos los caracteres de la string ’set’ desde el principio y   */
/* desde el final de ’s1’, hasta encontrar un caracter no perteneciente   */
/* a ’set’. La string resultante se devuelve con una reserva de malloc(3) */
/* --------------------------- Devuelve ----------------------------------*/
/* La string recortada. NULL si falla la reserva de memoria.              */
/*------------------------------------------------------------------------*/
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     i;
    int     start;
    int     end;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && s1[start] == set[start])
        start++;
    end = 0;
    while (s1[end])
        end++;
    i = 0;
    while (end > start && s1[end - 1] == set[i])
        end--;
    str
    str = malloc(sizeof());
}

int main(void)
{
    char    *dst;

    dst = ft_strtrim("Feliz viernes", "fe");
    printf("%s\n", dst);
    free(dst);
    return (0);
}