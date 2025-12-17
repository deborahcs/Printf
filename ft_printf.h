
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_printf(const char *str, ...);
int	ft_puthex(unsigned long n, char format);
int	ft_pointer(void *ptr);
int	ft_unsigned(unsigned int n);

#endif
