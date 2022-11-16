/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:05:30 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/16 08:30:44 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//TODO: refacto
int	ft_print_pointer(size_t ptr)
{
	size_t	base_len;

	base_len = ft_strlen(HEX_BASE_LOWER);
	ft_putstr_fd("0x", STDOUT_FILENO);
	return (2 + ft_print_size_t_base(ptr, HEX_BASE_LOWER, base_len));
}
