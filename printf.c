#include <stdio.h>
#include <unistd.h>
#include <stdlib.>

int my_printf(const char *format, ...)
{
	va_list ap;
	int	count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			print_format()
	}

}


int main ()
{
	int count;

	count = my_printf("Hello %s\n", "John");
	my_printf("THe chaars written are %d", count);
}
