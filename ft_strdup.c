/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsiller <jsiller@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 17:53:55 by jsiller           #+#    #+#             */
/*   Updated: 2021/06/17 12:52:59 by jsiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_strdup(const char *src)
{
	char	*str;

	str = malloc(ft_strlen((char *)src) + 1);
	if (!str)
		return (0);
	ft_memcpy(str, src, ft_strlen((char *)src) + 1);
	return (str);
}
