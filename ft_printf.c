/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:55:35 by tpoungla          #+#    #+#             */
/*   Updated: 2022/11/07 09:55:35 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
/**	va_list	args;
	int	i;

	i = 0;
	if (!*str)
		return (0);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			i = printf_tag(str, args, i);
			str++;
		}
		else
			i += write(1, str, 1);
		str++;
	}
	va_end (args);
	return (i);*/
	va_list args;
	int	i;

	i = 0;
	
}
