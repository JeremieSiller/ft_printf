/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsiller <jsiller@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 09:53:03 by jsiller           #+#    #+#             */
/*   Updated: 2021/06/24 10:43:30 by jsiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar_a(char c)
{
	write(1, &c, 1);
	g_ret++;
}

void	ft_putstr_a(char *str, int len)
{
	while (*str && len--)
	{
		write(1, str++, 1);
		g_ret++;
	}
}
