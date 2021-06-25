/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsiller <jsiller@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:12:05 by jsiller           #+#    #+#             */
/*   Updated: 2021/06/24 10:43:50 by jsiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define FALSE 0
# define TRUE 1
# define NONE 0
# define LEFT 1

# define FLAGS "-0"
# define WIDTH "*0123456789"
# define TYPES "cspdiuxX%n"

int		g_ret;
int		g_width;
int		g_precision;
int		g_padding;
int		g_sign;
va_list	g_args;

int		ft_printf(const char *input, ...);

int		ft_strlen(char *str);
void	ft_putchar_a(char c);
void	ft_putstr_a(char *str, int len);
int		ft_arguement(char *input, int *i);
char	*ft_strcpy(char *dst, char *src);

int		ft_char(void);
int		ft_string(void);
char	*ft_strdup(const char *src);
int		ft_integer(int big);
int		ft_pointer(void);
int		ft_percentage(void);
int		ft_unsigned(void);
int		ft_store(void);

char	*ft_hex_buf(unsigned long long nbr, int big);

char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int		ft_atoi(const char *str);
void	ft_revers(char *str);

void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strchr(const char *s, int c);

#endif