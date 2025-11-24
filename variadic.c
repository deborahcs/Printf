#include <stdarg.h>
#include <stdio.h>

float average(int n, ...)
{
	va_list ap;
	int	total;
	int	i;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int);
		i++;
	}
	return (float)total/n;
}

int main (void)
{
	float average_age;

	average_age = average (3, 10, 15, 20);
	printf("The average age of those 3 people is %f\n", average_age);
}
