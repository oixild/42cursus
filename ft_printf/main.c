#include "ft_printf.h"

int	main(void)
{
	char	*str;
	char	chr;
	int	i;
	int	num;

	num = 1230456798;
	str = "iMprimI r";
	i = ft_printf("ft_printf: the string is: %s\n", str);
	ft_printf("ft_printf: the number is: %i \n", i);
	chr = 'c';
	ft_printf("ft_printf: the char to be printed is: %c\n", chr);
	ft_printf("ft_printf: the number to be printed is: %i\n",num);
	ft_printf("ft_printf: %u \n", -10);
	ft_printf("ft_printf: %x \n", -10);

	ft_printf("\n");

	i = printf("printf: the string is: %s\n", str);
	printf("printf: the number is: %i \n", i);
	printf("printf: the char to be printed is: %c\n", chr);
	printf("printf: the number to be printed is: %i\n",num);
	printf("printf: %u \n", -10);
	printf("printf: %x \n", -10);
	return (0);
}
