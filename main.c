#include <stdio.h>
int main(void)
{
	int i = 0;
	void *ptr = &i;

	printf("Original: Hello %s, num: %d, hex: %x, ptr: %p\n", "World", i, i, ptr);
	write (1, "\n", 1);
	ft_printf("Mine: Hello %s, num: %d, hex: %x, ptr: %p\n", "World", i, i, ptr);
	write (1, "\n", 1);
	printf("Original: Negative: %d\n", -42);
	write (1, "\n", 1);
	ft_printf("Mine: Negative: %d\n", -42);
	write (1, "\n", 1);
	printf("Original: NULL String: %s\n", (char *) NULL);
	write (1, "\n", 1);
	ft_printf("Mine: NULL String: %s\n", (char *) NULL);
	write (1, "\n", 1);
	printf("Original: NULL Ptr: %p\n", (void *) NULL);
	write (1, "\n", 1);
	ft_printf("Mine: NULL Ptr: %p\n", (void *) NULL);
	write (1, "\n", 1);
	printf("Original: Min Int: %d\n", -2147483648);
	write (1, "\n", 1);
	ft_printf("Mine: Min Int: %d\n", -2147483648);
	return (0);
}
