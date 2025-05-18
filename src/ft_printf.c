/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:14:00 by zali              #+#    #+#             */
/*   Updated: 2025/03/13 11:36:31 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_display_params(va_list args, char format)
{
	int	size;

	size = 0;
	if (format == 's')
		size = ft_print_str(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		size = ft_print_base_core(va_arg(args, int), 0, 10);
	else if (format == 'u')
		size = ft_print_base_core(va_arg(args, unsigned int), 0, 10);
	else if (format == 'c')
		size = ft_print_char(va_arg(args, int));
	else if (format == 'p')
		size = ft_print_mem(va_arg(args, void *));
	else if (format == 'x' || format == 'X')
		size = ft_print_base_core(va_arg(args, unsigned int),
				format == 'X', 16);
	else if (format == '%')
		size = write(1, "%", 1);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int				total_bytes;
	va_list			args;

	va_start(args, str);
	total_bytes = 0;
	if (!str || write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			if (*(str + 1) == '\0')
				return (-1);
			total_bytes += ft_display_params(args, *(++str));
		}
		else
			total_bytes += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (total_bytes);
}
