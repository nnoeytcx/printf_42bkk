/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:58:31 by tpoungla          #+#    #+#             */
/*   Updated: 2022/11/07 09:58:31 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr_id(int n);
int		ft_putchar_c(char c);
int		ft_percent(void);
size_t	ft_strlen(const char *s);
int		ft_putstr_s(char *s);
int		ft_putnbr_u(unsigned int n);

#endif