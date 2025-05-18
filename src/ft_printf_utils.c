/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:00:53 by zali              #+#    #+#             */
/*   Updated: 2025/03/13 11:40:55 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
		ft_putchar(str[count++]);
	return (count);
}

int	ft_put_hex(size_t n)
{
	int			count;
	const char	*hex = "0123456789abcdef";

	count = 0;
	if (n >= 16)
		count += ft_put_hex(n / 16);
	ft_putchar(hex[n % 16]);
	return (count + 1);
}

int	ft_print_mem(void *ptr)
{
	size_t		addr;
	int			count;	

	count = 0;
	addr = (size_t)ptr;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_put_hex(addr);
	return (count);
}

int	ft_print_char(int c)
{
	ft_putchar(c);
	return (1);
}

int	ft_print_base_core(long int nbr, int upcase, int base)
{
	int	total_bytes;

	total_bytes = 0;
	total_bytes += ft_print_base(nbr, upcase, base);
	if (nbr < 0)
		total_bytes++;
	return (total_bytes);
}
