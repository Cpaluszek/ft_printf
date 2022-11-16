/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:07:19 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/16 10:38:56 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		i;
	int		printed_char_count;
	va_list	args;

	va_start(args, input);
	i = 0;
	printed_char_count = ft_strlen(input);
	while (input[i])
	{
		if (input[i] == '%')
			printed_char_count += ft_pick_conversion(input[++i], args) - 2;
		else
			ft_putchar_fd(input[i], STDOUT_FILENO);
		i++;
	}
	va_end(args);
	return (printed_char_count);
}
