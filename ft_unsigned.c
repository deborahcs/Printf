
#include "libftprintf.h"

int	ft_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_unsigned(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}
