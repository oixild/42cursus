#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}

void putnbr(int num)
{
	char buffer[20];
    int i;
   
	i = 0;
    if (num == 0)
    {
        write(1, "0", 1);
        return;
    }
    while (num > 0)
    {
        buffer[i] = (num % 10) + '0';
        num /= 10;
        i++;
    }
	while (i > 0)
    {
        write(1, &buffer[i - 1], 1);
        i--;
    }
}

char	putstr(char *a)
{
	int i;
	
	i = 0;
	while(a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	return (0);
}

void	fizzBuzz(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
		putstr("fizzbuzz");
	else if (num % 3 == 0)
		putstr("fizz");
	else if (num % 5 == 0)
		putstr("buzz");
	else
		putnbr(num);
	write(1, "\n", 1);
}

int main()
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		fizzBuzz(i);
		i++;
	}
	return (0);
}
/*int main(int argc, char *argv[])

{
	int i;
	int num;

	i = 1;
	if (argc < 2)
	{
		putstr("Error, argumentos insuficientes");
		return (0);
	}
	while(argv[i])
	{
		num  = ft_atoi(argv[i]);
		if (!(num != 0))
		{
			putstr("\nError: The argument is not an integer.\n");
			return (1);
		}
		if (num <= 100 || num >= 0)
		{
			fizzBuzz(num);
		}
		i++;
	}
	return (0);
}*/
