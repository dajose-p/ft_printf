/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:11:59 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/07 21:21:32 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *last, ...)
{
	va_list	ap;

	va_start(ap, last);
	while (*last)
	{
		if (*last == 'c')
			ft_putchar('c');
		last++;
	}
	va_end(ap);
	return (0);
}
