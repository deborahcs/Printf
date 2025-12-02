/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:53:57 by decabral          #+#    #+#             */
/*   Updated: 2025/10/20 10:55:32 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);
int	ft_puthex(unsigned long n, char format);

#endif
