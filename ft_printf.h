/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:12:17 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/11 04:15:04 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <limits.h>
# include <stdarg.h>

int		ft_printf(char const *last, ...);
int		ft_printchar(int c);
int		ft_printstr(char *s);
int		ft_printnbr(int n);
int		ft_printnbr_uns(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_printnbr_hex(long long n, int up);

#endif
