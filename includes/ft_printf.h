/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zali <zali@student.42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:58:40 by zali              #+#    #+#             */
/*   Updated: 2025/03/13 11:36:46 by zali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);

// Print Flags
int				ft_print_base_core(long int nbr, int upcase, int base);
int				ft_print_mem(void *ptr);
int				ft_print_str(char *str);
int				ft_print_char(int c);
int				ft_put_hex(size_t n);

//Helper
void			ft_putchar(char c);
int				ft_strlen(char *str);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_toupper(int c);
int				ft_islower(int c);

// Print Base Funcs
int				ft_print_base(long int nbr, int upcase, int base);
void			ft_print_hex_with_upcase(int c, int upcase);

#endif
