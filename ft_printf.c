/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:37:47 by decabral          #+#    #+#             */
/*   Updated: 2025/12/02 18:21:21 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	check_spec(va_list ap, char specifier)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(char *));
	else if (specifier == 'p')
		count += ft_pointer(va_arg(void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(int));
	else if (specifier == 'u')
		count += ft_unsigned(va_arg());
	else if (specifier == 'x')
		count += ft_puthex(va_arg(unsigned long, specifier));
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	count;
	va_list	args;
	va_start (args, str);

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += check_spec(args, str[i]);
		}
		count += write(1, &str[i], 1);
		i++;
	}
	return (count);
}













