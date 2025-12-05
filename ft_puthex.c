
#include "libftprintf.h"

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
