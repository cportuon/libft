/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cportuon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:31:38 by cportuon          #+#    #+#             */
/*   Updated: 2022/09/09 13:45:15 by cportuon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i
}
int	main(void)
{
     const char *str1;
     const char *str2;
     size_t n;
	 int rst;

     str1 = "cosmeportuondo@gmail.com";
     str2 = "cosmeportubar@gmail.com";
     n = 11;
	 rst = ft_strncmp(str1, str2, n);
	 printf("ft_strncmp fuction: %d\n",rst);
	 rst = strncmp(str1, str2, n);
	 printf("strncmp fuction: %d\n",rst);
}
