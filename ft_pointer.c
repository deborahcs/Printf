/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: decabral <decabral@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:52:26 by decabral          #+#    #+#             */
/*   Updated: 2025/12/02 16:58:08 by decabral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		count += write(1, "(nil)", 5);
	count += write(1, "0x", 2);
	count += ft_puthex(prt, 'x');
	return (count);
}
/*#include <stdio.h>
int main (void)
{
	printf("");
}*/