/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalusze <cpalusze@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:16:15 by cpalusze          #+#    #+#             */
/*   Updated: 2022/11/16 08:17:36 by cpalusze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int nb)
{
	char	c;
	int		len;

	len = 1;
	if (nb > 9)
		len += ft_print_unsigned_int(nb / 10);
	c = '0' + (nb % 10);
	write(STDOUT_FILENO, &c, 1);
	return (len);
}
