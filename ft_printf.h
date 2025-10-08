/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:12:17 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/08 23:35:05 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(char const *last, ...);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int	ft_printnbr_uns(long n);

#endif
