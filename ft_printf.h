/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:37:58 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/20 17:45:07 by mobenhab         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	check_format(const char *str, va_list argptr);
int	format_conversion(const char c, va_list argptr);
int	ft_printf(const char *format, ...);
int	ft_char(va_list argptr);
int	ft_str(va_list argptr);
int	ft_digit(va_list argptr);
int	ft_putnbr(int n);
int	ft_putnbr_uni(unsigned int n);
int	ft_putnbrbase(unsigned int nbr);
int	ft_base(va_list argptr);
int	ft_putnbrbase_lower(unsigned int nbr);
int	ft_base_lower(va_list argptr);
int	ft_digit_uni(va_list argptr);
int	ft_base_long(va_list argptr);
int	ft_putnbrbase_long(unsigned long nbr);

#endif
