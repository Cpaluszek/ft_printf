/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:13:48 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/16 08:51:59 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"
# define NULL_STR "(null)"
# define HEX_BASE_LOWER "0123456789abcdef"
# define HEX_BASE_UPPER "0123456789ABCDEF"

// TODO: stay uniform with const vars

int		ft_printf(const char *input, ...);

int		ft_pick_conversion(const char c, va_list args);

int		ft_print_decimal(const int nb);
int		ft_print_string(const char *str);
int		ft_print_pointer(size_t ptr);
int		ft_print_lower_hex(size_t nb);
int		ft_print_upper_hex(size_t nb);

int		ft_print_unsigned_int(unsigned int nb);
int		ft_print_size_t_base(size_t nb, char *base, size_t base_len);

void	ft_putstr_n_fd(const char *s, size_t n, int fd);

#endif