/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:37:39 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/22 10:04:12 by mobenhab         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		count;

	va_start(argptr, format);
	count = check_format(format, argptr);
	va_end(argptr);
	return (count);
}
