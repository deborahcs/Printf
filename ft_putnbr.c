/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 17:45:15 by decabral          #+#    #+#             */
/*   Updated: 2025/11/18 17:45:17 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libftprintf.h>

int	ft_putnbr(int n)
{
	long	num;
	int	count;
	
	num = n;
	count = 0;
	if (num < 0)
	{
		ft_putchar('-');	
		num *= -1; 
		count++;
	}
	if (num <= 9)
	{
		ft_putchar(num + '0');
		count++;
	}
	if (num > 9)
	{
		count += ft_putnbr(num / 10);
		
		ft_putnbr(num % 10);
		count++;
	}
	return (count);
}
/*#include <stdio.h>
int main (void)
{
	printf("%d\n", ft_putnbr(-1234));
}*/
