/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:21:33 by zali              #+#    #+#             */
/*   Updated: 2025/05/14 19:23:38 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57));
}

int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
