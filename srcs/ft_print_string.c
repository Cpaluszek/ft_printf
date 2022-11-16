/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:29:07 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/16 08:27:21 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(const char *str)
{
	if (str == NULL)
	{
		ft_putstr_fd(NULL_STR, STDOUT_FILENO);
		return ((int)ft_strlen(NULL_STR));
	}
	ft_putstr_fd(str, STDOUT_FILENO);
	return ((int)ft_strlen(str));
}
