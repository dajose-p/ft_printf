/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danjose- <danjose-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 22:42:45 by danjose-          #+#    #+#             */
/*   Updated: 2025/10/08 23:41:30 by danjose-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

static int	count_num(long long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int			count;
	long long	nl;

	nl = (long long)n;
	count = 0;
	ft_putnbr_fd(n, 1);
	if (nl == 0)
		return (1);
	if (nl < 0)
	{
		nl = -nl;
		count++;
	}
	count += count_num(nl);
	return (count);
}

int	ft_printnbr_uns(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		n = UINT_MAX - (n - 1);
	}
	ft_putnbr_fd(n, 1);
	if (n == 0)
		return (1);
	count += count_num(n);
	return (count);
}
