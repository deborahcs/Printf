
#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_puthex((unsigned long)ptr, 'x');
	return (count);
}
