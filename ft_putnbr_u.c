/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:29:21 by tpoungla          #+#    #+#             */
/*   Updated: 2022/11/08 00:29:21 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	char			i;
	unsigned long	num;
	int				l;

	l = 0;
	num = (long)n;
	if (num >= 10)
		l += ft_putnbr_id(num / 10);
	i = (num % 10) + '0';
	l += write(1, &i, 1);
	return (l);
}
