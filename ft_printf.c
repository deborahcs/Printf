/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:37:47 by decabral          #+#    #+#             */
/*   Updated: 2025/11/21 10:38:19 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int (va_list , char specifier)	
{
	int	count;
	
	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(int );
	if (specifier == 's')
		count += ft_putstr(va_arg(char *);
	if (specifier == 'p')
		count +=  ft_pointer(va_arg(void *);
	if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(int );	
	if (specifier == '')
		count += ft_puthex(va_arg(int );	

}




int	ft_printf(const char *format, ...)
{
	int	i;
	int	count;
	va_list	args;
	va_start(args, format);
	
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format == '%')
			count += 
			
	}
}
