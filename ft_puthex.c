/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:50:18 by decabral          #+#    #+#             */
/*   Updated: 2025/12/05 10:53:38 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char format)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	if ((n % 16) < 10)
		ft_putchar(n % 16 + '0');
	else
	{
		if (format == 'x')
			ft_putchar((n % 16) - 10 + 'a');
		if (format == 'X')
			ft_putchar((n % 16) - 10 + 'A');
	}
	count++;
	return (count);
}
/*#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_puthex(123456789, 'x'));
}*/
