/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_size_t_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:18:48 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/24 11:57:42 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_size_t_base(size_t nb, char *base, size_t base_len)
{
	int	char_count;

	char_count = 1;
	if (nb >= base_len)
		char_count += ft_print_size_t_base(nb / base_len, base, base_len);
	ft_putchar_fd(base[nb % base_len], STDOUT_FILENO);
	return (char_count);
}
